#ifndef ENEMY_H
#define ENEMY_H

class Enemy {
public:
	virtual string getInformation() const = 0;

	virtual int hit() const = 0;
	virtual void takeDamage(int Damage_) = 0;
	virtual bool isDied() const = 0;

	virtual int getDropChance() const = 0;
	virtual int getExperience() const = 0;
	virtual Weapon* getDrop() const = 0;
};

#endif // ENEMIES_H

