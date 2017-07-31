#include <iostream>

#include "Entity.h"
#include "Zombie.h"
#include "AmmoPack.h"
#include "HealthPack.h"

enum EntityType
{
	ZOMBIE, HEALTHPACK, AMMOPACK
};

Entity* CreateEntity(EntityType entityType);

int main()
{
	Entity* pZombie = nullptr;
	Entity* pAmmoPack = nullptr;
	Entity* pHealthPack = nullptr;

	pZombie = CreateEntity(ZOMBIE);
	pAmmoPack = CreateEntity(AMMOPACK);
	pHealthPack = CreateEntity(HEALTHPACK);

	std::cout << std::endl;
	pZombie->PrintStats();
	std::cout << std::endl;

	pAmmoPack->PrintStats();
	std::cout << std::endl;

	pHealthPack->PrintStats();
	std::cout << std::endl;

	delete pZombie;
	delete pAmmoPack;
	delete pHealthPack;
}

Entity* CreateEntity(EntityType entityType)
{
	switch (entityType)
	{
	case ZOMBIE :
		return new Zombie();
		break;
	case HEALTHPACK :
		return new HealthPack();
		break;
	case AMMOPACK :
		return new AmmoPack();
		break;
	default:
		break;
	}
}