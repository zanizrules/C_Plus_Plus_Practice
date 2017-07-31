#pragma once

#pragma once

#include "Entity.h"

#ifndef ___HEALTHPACK_H___
#define ___HEALTHPACK_H___

class HealthPack : public Entity
{
public:
	HealthPack();
	~HealthPack();
	virtual void PrintStats();
	int Health() const;
	float Weight() const;
	void SetWeight(float weight);
	void SetHealth(int health);

private:
	int health;
	float weight;

};

#endif // ___HEALTHPACK_H___
