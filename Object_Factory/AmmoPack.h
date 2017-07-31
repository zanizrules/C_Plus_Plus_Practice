#pragma once

#ifndef ___AMMOPACK_H___
#define ___AMMOPACK_H___

#include "Entity.h"

class AmmoPack : public Entity
{
public:
	AmmoPack();
	~AmmoPack();
	void PrintStats();
	int Ammo() const;
	float Weight() const;
	void SetWeight(float weight);
	void SetAmmo(int ammo);

private:
	int ammo;
	float weight;

};

#endif // ___AMMOPACK_H___
