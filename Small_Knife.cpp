#include "Small_Knife.h"
#include  <cstdlib>

using namespace std;

Small_Knife::Small_Knife(int Damage, int CriticalCHance, double CriticalMultiplier) {
	this->Damage_ = Damage;
	this->CriticalChance_ = CriticalCHance;
	this->CriticalMultiplier_ = CriticalMultiplier;
	this->name_ = "Small Knife";
}

int Small_Knife::getAllDamage() const{
	int FinalDamage = 0;
	FinalDamage += Damage_;
	int Crit = 1 + rand() % 100;
	if (Crit >=(100-CriticalChance_))
		FinalDamage += ((double)(Damage_) * CriticalMultiplier_);
	return FinalDamage;
}

Small_Knife& Small_Knife::operator=(const Small_Knife& small_knife) {
	this->Damage_ = small_knife.Damage_;
	this->CriticalChance_ = small_knife.CriticalChance_;
	this->CriticalMultiplier_ = small_knife.CriticalChance_;
	this->name_ = small_knife.name_;
	return *this;
}
