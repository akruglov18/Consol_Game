#ifndef SMALL_KNIFE_H
#define SMALL_KNIFE_H

#include <string>

#include "Weapon.h"

using namespace std;


class Small_Knife : public Weapon {
private:
	int Damage_;
	int CriticalChance_;
	double CriticalMultiplier_;
	string name_;

public:
	Small_Knife(int Damage = 7, int CriticalCHance = 50, double CriticalMultiplier = 0.5);

	int getAllDamage() const override;

	Small_Knife& operator=(const Small_Knife& small_knife);
};

#endif
