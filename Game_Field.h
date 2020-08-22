#ifndef GAME_FIELD_H
#define GAME_FIELD_H

#include"Tiles.h"
#include<vector>

using namespace std;

class GameField {
private:
	int Size_;
	vector<vector<Tile>> Field_;
	int CommonChance_;					//chance to spawn common tile
	int EnemyCountCommon_;
	int CaveChance_;						//chance to spawn cave tile
	int EnemyCountCave_;
public:
	GameField(int Size=10, int CommonChance = 80, int CaveChance = 15, int EnemyCountCommon= 5, int EnemyCountCave=15 );

	void setPlayerPostion(int NumRow, int NumCol, bool isTherePlayer);
	string getTileType(int numRow, int numCol) const;
	int getSize() const;

	friend ostream& operator<<(ostream& stream, const GameField& GF);
};

#endif
