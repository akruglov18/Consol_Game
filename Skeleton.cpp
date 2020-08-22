#include "Skeleton.h"

Skeleton::Skeleton(Weapon* weapon, int Level, int Health, int Defense, int Attack, int DropChance, int Experience) {
	this->weapon_ = weapon;
	this->Level_ = Level;
	this->Health_ = Health;
	this->Defense_ = Defense;
	this->Attack_ = Attack;
	this->DropChance_ = DropChance;
	this->Experience_ = Experience;
}

string Skeleton::getInformation() const {
	string info = "Health: " + to_string(this->Health_) + "\n" +
		"Defense: " + to_string(this->Defense_) + "\n" +
		"Attack: " + to_string(this->Attack_) + "\n";
	return info;
}

int Skeleton::hit() const {
	int FinalDamage = this->weapon_->getAllDamage();
	return FinalDamage;
}

void Skeleton::takeDamage(int Damage) {
	this->Health_ -= Damage;
}

bool Skeleton::isDied() const{
	if (this->Health_ > 0)
		return false;
	else
		return true;
}

int Skeleton::getDropChance() const {
	return this->DropChance_;
}

int Skeleton::getExperience() const {
	return this->Experience_;
}

Weapon* Skeleton::getDrop() const {
	return new Small_Knife();
}

