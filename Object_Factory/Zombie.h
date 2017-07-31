#pragma once

#ifndef ___ZOMBIE_H___
#define ___ZOMBIE_H___

#include "Entity.h"

class Zombie : public Entity
{
public:
	Zombie();
	~Zombie();
	virtual void PrintStats();
	float DPS() const;
	int Health() const;
	int Speed() const;
	void SetSpeed(int speed);
	void SetHealth(int health);
	void SetDPS(float dps);

private:
	int health;
	int speed;
	float dps;

};

#endif // ___ZOMBIE_H___
