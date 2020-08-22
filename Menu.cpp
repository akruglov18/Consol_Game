#include "Menu.h"

string Menu::printMenu(string TileType) {
	if (TileType == "Common") {
		return "Don't konw\n";
	}
	if (TileType == "Cave") {
		return "1. Go down to the cave\n";
	}
}

string Menu::printHelp(){
	return "Use W,A,S,D to move across the field\n";
}