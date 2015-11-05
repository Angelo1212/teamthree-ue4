#pragma once
class HealthSystem
{
private:
protected:
	float val;
public:
	HealthSystem *next;
	float damage(float);
	HealthSystem();
	HealthSystem::HealthSystem(float val);
	~HealthSystem();
};

