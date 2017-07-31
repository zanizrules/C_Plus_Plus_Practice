#pragma once

#ifndef ___PLAYER_H___
#define ___PLAYER_H___

class Player
{
public:
	Player();
	~Player();
	void PrintStats();
	int Health() const;
	int Rage() const;
	float Experience() const;
	void GiveExperience(float exp);
	void SetRage(int rageLevel);
	void SetHealth(int health);

private:
	int health;
	int rage;
	float experience;

};

#endif // ___PLAYER_H___
