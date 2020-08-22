#include "Move.h"
#include "Game_Field.h"

bool Move::moveUp(pair<int, int> &PlayerPos, GameField& GF){
	int FieldSize = GF.getSize();
	if (PlayerPos.first - 1 >= 0 && PlayerPos.first - 1 < FieldSize) {
		GF.setPlayerPostion(PlayerPos.first, PlayerPos.second, false);
		PlayerPos.first--;
		GF.setPlayerPostion(PlayerPos.first, PlayerPos.second, true);
		return true;
	}
	return false;
}

bool Move::moveDown(pair<int, int> &PlayerPos, GameField& GF){
	int FieldSize = GF.getSize();
	if (PlayerPos.first + 1 >= 0 && PlayerPos.first + 1 < FieldSize) {
		GF.setPlayerPostion(PlayerPos.first, PlayerPos.second, false);
		PlayerPos.first++;
		GF.setPlayerPostion(PlayerPos.first, PlayerPos.second, true);
		return true;
	}
	return false;
}
bool Move::moveLeft(pair<int, int> &PlayerPos, GameField& GF){
	int FieldSize = GF.getSize();
	if (PlayerPos.second - 1 >= 0 && PlayerPos.second - 1 < FieldSize) {
		GF.setPlayerPostion(PlayerPos.first, PlayerPos.second, false);
		PlayerPos.second--;
		GF.setPlayerPostion(PlayerPos.first, PlayerPos.second, true);
		return true;
	}
	return false;
}
bool Move::moveRight(pair<int, int> &PlayerPos, GameField& GF){
	int FieldSize = GF.getSize();
	if (PlayerPos.second + 1 >= 0 && PlayerPos.second + 1 < FieldSize) {
		GF.setPlayerPostion(PlayerPos.first, PlayerPos.second, false);
		PlayerPos.second++;
		GF.setPlayerPostion(PlayerPos.first, PlayerPos.second, true);
		return true;
	}
	return false;
}