#include "HealthNode.h"
using namespace std;

class HealthNode {
	friend class HealthSystem;

private:
	
protected:
	float val;

public:
	HealthNode *next;
	HealthNode *last;

	float HealthNode::modify(float fdiff) {
		return val += fdiff;
	}

	HealthNode::HealthNode() {
		next = nullptr;
		last = nullptr;
		val = 0;
	}

	HealthNode::~HealthNode() {
	}

};