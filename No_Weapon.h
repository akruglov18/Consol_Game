#ifndef NO_WEAPON_H
#define NO_WEAPON_H

#include <string>
#include <algorithm>

#include "Weapon.h"

using namespace std;

class No_Weapon : public Weapon {
private:
	int Damage_;
	int CriticalChance_;
	double CriticalMultiplier_;
	string name;

public:
	No_Weapon(int Damage = 4, int CriticalCHance = 1, double CriticalMultiplier = 1);

	int getAllDamage() const override;
};

#endif
