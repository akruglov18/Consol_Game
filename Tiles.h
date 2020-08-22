#ifndef TILES_H
#define TILES_H

#include "Skeleton.h"
#include "Weapon.h"
#include "Enemy.h"

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Tile {
private:
	string Type_;
	int MaxEnemyCount_;
	vector<Enemy*> Enemies_;
	bool isTherePlayer_;
	string ShortType_;
public:
	Tile();
	Tile(const Tile& tile);
	void makeCommon(const int& MaxEnemyCount);
	void makeCave(const int& MaxEnemyCount);
	void setPlayerPosition(bool isThere);
	string getType() const;
	string getShortType() const;

	Tile& operator=(const Tile& tile);
};
#endif // !TILES_H

