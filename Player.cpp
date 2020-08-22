#include "Player.h"

using namespace std;

Player::Player(Weapon* weapon, int Level, int CurrentExperience, int RequiredExperience, int MaxHealth, int Defense, int Attack) {
	this->weapon_ = weapon;
	this->Level_ = Level;
	this->CurrentExperience_ = CurrentExperience;
	this->RequiredExperience_ = RequiredExperience;
	this->Health_ = this->MaxHealth_ = MaxHealth;
	this->Defense_ = Defense;
	this->Attack_ = Attack;
}

string Player::getInformation() const {
	string info =  "Health: " + to_string(this->Health_) + "/" + to_string(MaxHealth_) + "\n" +
				"Defense: " + to_string(this->Defense_) + "\n" +
				"Attack: " + to_string(this->Attack_) + "\n";
	return info;
}



bool Player::isNewLevel() const{
	if (CurrentExperience_ >= RequiredExperience_)
		return true;
	return false;
}

void Player::setCurrentExperience(int CurrentExperience) {
	this->CurrentExperience_ = CurrentExperience;
}

void Player::setRequiredExperience(int RequiredExperience) {
	this->RequiredExperience_ = RequiredExperience;
}

void Player::setMaxHealth(int MaxHealth) {
	this->MaxHealth_ = MaxHealth;
}

void Player::setAttack(int Attack) {
	this->Attack_ = Attack;
}

void Player::setDefense(int Defense) {
	this->Defense_ = Defense;
}

void Player::setWeapon(Weapon* weapon) {
	this->weapon_ = weapon;
}

int Player::getCurrentExperience() const {
	return this->CurrentExperience_;
}
int Player::getRequiredExperience() const {
	return this->RequiredExperience_;
}

int Player::getMaxHelath() const {
	return this->MaxHealth_;
}
int Player::getHealth() const {
	return this->Health_;
}
int Player::getAttack() const {
	return this->Attack_;
}
int Player::getDefense() const {
	return this->Defense_;
}

void Player::takeDamage(int Damage) {
	this->Health_ -= Damage;
}

int Player::hit() const{
	int FinalDamage = this->weapon_->getAllDamage();
	return FinalDamage;
}

bool Player::isDied() const {
	if (this->Health_ > 0)
		return false;
	else
		return true;
}
