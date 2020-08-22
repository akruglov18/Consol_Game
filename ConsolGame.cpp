#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

#include "Tiles.h"
#include "Player.h"
#include "Small_Knife.h"
#include "No_Weapon.h"
#include "Skeleton.h"
#include "Game_Field.h"
#include "Enemy.h"
#include "Menu.h"
#include "Move.h"

using namespace std;

bool ButtonMove(char Button, pair<int,int> &PlayerPos, GameField& GF) {
	if (Button == 'W' || Button ==  'w')
		return Move::moveUp(PlayerPos, GF);
	if (Button == 'S' || Button == 's')
		return Move::moveDown(PlayerPos, GF);
	if (Button == 'A' || Button == 'a')
		return Move::moveLeft(PlayerPos, GF);
	if (Button == 'D' || Button == 'd')
		return Move::moveRight(PlayerPos, GF);
	return false;
}

int main() {
	srand(time(0));
	system("mode con cols=120 lines=45");
	Player player;
	GameField Field;
	pair<int, int> PlayerPos(0, 0);
	bool Win = false;
	Field.setPlayerPostion(PlayerPos.first, PlayerPos.second, true);
	while (!Win) {
		cout << Menu::printHelp()<<endl;
		cout << Field << endl;
		cout << player.getInformation();
		Menu::printHelp();
		Menu::printMenu(Field.getTileType(PlayerPos.first, PlayerPos.second));
		char PushedButton; // num of selected index in menu or W,A,S,D
		PushedButton = _getch();
		ButtonMove(PushedButton, PlayerPos, Field);
		system("cls");
	}
}