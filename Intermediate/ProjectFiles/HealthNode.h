#pragma once
class HealthNode
{
private:
protected:
	float val;
public:
	HealthNode *next;
	HealthNode *last;
	float modify(float);
	HealthNode();
	HealthNode::HealthNode(float val);
	~HealthNode();
};

