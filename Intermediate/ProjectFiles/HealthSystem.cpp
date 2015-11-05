#include "HealthSystem.h"
#include "HealthNode.h"
#include <math.h>
using namespace std;

class HealthSystem {
private:
	HealthNode *root;
	HealthNode *end;
	float fMaxNodeHealth;

	float HealthSystem::removeNode(HealthNode *node) {
		if (node->last == nullptr) {				//if node is root of list;
			node->next->last = nullptr;				//1. make next node point back to null
			root = node->next;						//2. update root pointer
		}
		else {										//else, if node is not root (i.e. there is a node BEFORE it)
			node->last->next = node->next;			//1. make last node point forward to next node
		}

		if (node->next == nullptr) {				//if node is end of list;
			node->last->next = nullptr;				//1. make last node point forward to null
			end = node->last;						//2. update end pointer
		}
		else {										//else, if node is not end (i.e. there is a node AFTER it)
			node->next->last = node->last;			//1. make next node point back to last node
		}

		delete node;								//delete node
	}

protected:

public:

	//DAMAGE NODES 

	float HealthSystem::damage(float fdam) {
		damageNode(fdam, end);						//damages the end node with damageNode()
	}

	float HealthSystem::damageNode(float fdam, HealthNode *node) {
		fdam = fabsf(fdam);							//convert the given float to an absolute value (i.e. -1.234 becomes 1.234)
		fdam = -fdam;								//inverts fdam to be a negative value, as needed by HealthNode.modify() to cause damage
		float overflow = node->modify(fdam);		//damage node and check for excess damage

		if (overflow <= 0) {						//if there is excess damage
			damageNode(overflow, node->last);		//1. recursively damage the node below
			removeNode(node);						//2. safely destroy the node
		}
	}

	//HEAL NODES

	float HealthSystem::heal(float fheal) {
		return healNode(fheal, end);				//heals the end node with healNode()
	}

	float HealthSystem::healNode(float fheal, HealthNode *node) {
		float fval = node->modify(fabsf(fheal));					//store the value of node->val, after adding the absolute of fheal to it

		if (fval > fMaxNodeHealth && node->next != nullptr) {		//if there is excess health (above fMaxNodeHealth) AND no nodes after
			addNodeAtEnd(fval - fMaxNodeHealth);					//1. create new node at end (after current/end node)
		}
		else if (fval > fMaxNodeHealth && node->next != nullptr) {	//if there is excess health (above fMaxNodeHealth) AND a node after
			healNode(fval - fMaxNodeHealth, node->next);			//1. recursively heal the node above
		}

		return node->modify(0);										//return the nodes value
	}

	//ADD NEW NODES 
	/* If a new node is created with excess health, the excess will be used to heal the node(s) above it - by way of healNode().
	 * In this case, if no nodes exist above the new node (i.e. it is the end node), new node(s) will be created to absorb the excess. */ 

	void HealthSystem::addNodeAtEnd(float fval) {
		end->next = new HealthNode();				//add new node at end of list, with 0 health
		end->next->last = end;						//point new end's last back to the current end
		end = end->next;							//point end to new node (as it is the new end of the list)
		healNode(fval, end);						//heal the new/end node by fval; 
													//   this ensures that if fval > fmax, additional nodes are created (rather than overcharging the value)
	}

	void HealthSystem::addNodeAfter(float fval, HealthNode *node) {
		HealthNode *after = node->next;				//pointer to node after
		node->next = new HealthNode();				//create new node
		node->next->last = node;					//create backlink from new node
		node->next->next = after;					//create forward link from new node to after
		healNode(fval, node->next);					//heal new node
	}

	/*void HealthSystem::replaceNode(float fval, HealthNode *node) {
		HealthNode *before = node->last;			//pointer to node before
		HealthNode *after = node->next;				//pointer to node after
		before->next = new HealthNode(fval);			
	}*/

	//CONSTRUCTORS

	HealthSystem::HealthSystem(float fval) {
		fMaxNodeHealth = fval;						//set max health per node
		root = new HealthNode(fMaxNodeHealth);		//create root node with maximum health
		end = root;									//assign end pointer to root node (since it is also the last node in the list)
	}

	HealthSystem::HealthSystem(float fmax, float fval) {
		fMaxNodeHealth = fmax;						//set max health per node
		root = new HealthNode();					//create root node with 0 health
		end = root;									//assign end pointer to root node (since it is also the last node in the list)
		healNode(fval, root);						//heal the root node by fval; 
													//   this ensures that if fval > fmax, additional nodes are created (rather than overcharging the value of root)
	}

	//DESTRUCTORS

	HealthSystem::~HealthSystem() {
	}

};