#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "Weapon.h"
#include"No_Weapon.h"
#include "Small_Knife.h"

using namespace std;

class Player {
private:
	int Level_;
	int CurrentExperience_;
	int RequiredExperience_;
	int Health_;
	int MaxHealth_;
	int Attack_;
	int Defense_;
	Weapon* weapon_;
public:
	Player(Weapon* weapon = new No_Weapon(), int Level = 1, int CurrentExperience = 0, int RequiredExperience = 100,
		int MaxHealth = 100, int Defense = 0, int Attack = 0);

	string getInformation() const;

	bool isNewLevel() const;
	void setCurrentExperience(int CurrentExperience);
	void setRequiredExperience(int RequiredExperience);
	void setMaxHealth(int MaxHeath);
	void setAttack(int Attack);
	void setDefense(int Defense);
	void setWeapon(Weapon* weapon);

	int getCurrentExperience() const;
	int getRequiredExperience() const;
	int getMaxHelath() const;
	int getHealth() const;
	int getAttack() const;
	int getDefense() const;


	void takeDamage(int Damage);
	int hit() const;

	bool isDied() const;
};
#endif 
