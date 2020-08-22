#include "No_Weapon.h"

No_Weapon::No_Weapon(int Damage, int CriticalCHance, double CriticalMultiplier) {
	Damage_ = Damage_;
	CriticalChance_ = CriticalCHance;
	CriticalMultiplier_ = CriticalMultiplier;
	name = "No weapon";
}

int No_Weapon::getAllDamage() const {
	int FinalDamage = 0;
	FinalDamage += Damage_;
	int Crit = 1 + rand() % 100;
	if (Crit >= (100 - CriticalChance_))
		FinalDamage += ((double)(Damage_) * CriticalMultiplier_);
	return FinalDamage;
}