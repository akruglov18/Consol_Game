#ifndef SKELETON_H
#define SKELETON_H

#include <iostream>
#include <string>

#include "Weapon.h"
#include "Small_Knife.h"
#include "Enemy.h"
#include "No_Weapon.h"

using namespace std;

class Skeleton : public Enemy{
private:
	int Level_;
	int Health_;
	int Attack_;
	int Defense_;
	int DropChance_;
	Weapon* weapon_;
	int Experience_;
public:
	Skeleton(Weapon* weapon = new Small_Knife(), int Level = 1, int Health = 30, int Defense = 0, int Attack = 5, 
		int DropChance = 20, int Experience = 15);

	string getInformation() const override;

	int hit() const override;
	void takeDamage(int Damage) override;
	bool isDied() const override;

	int getDropChance() const override;
	int getExperience() const override;
	Weapon* getDrop() const override;
};

#endif