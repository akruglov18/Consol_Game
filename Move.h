#ifndef MOVE_H
#define MOVE_H

#include <utility>

#include "Game_Field.h"

using namespace std;

class Move {
public:
	static bool moveUp(pair<int, int> &PlayerPos, GameField& GF);
	static bool moveDown(pair<int, int> &PlayerPos, GameField& GF);
	static bool moveLeft(pair<int, int> &PlayerPos, GameField& GF);
	static bool moveRight(pair<int, int> &PlayerPos, GameField& GF);
};

#endif
