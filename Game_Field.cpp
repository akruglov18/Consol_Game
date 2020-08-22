#include"Game_Field.h"

using namespace std;

GameField::GameField(int Size, int CommonChance, int CaveChance, int EnemyCountCommon, int EnemyCountCave) {
	Size_ = Size;
	CommonChance_ = CommonChance;
	CaveChance_ = CaveChance;
	EnemyCountCommon_ = EnemyCountCommon;
	EnemyCountCave_ = EnemyCountCave;
	Field_.resize(Size);
	for (int i = 0; i < Size; i++) 
		Field_[i].resize(Size);

	for (int i = 0; i < Size; i++) {
		for (int j = 0; j < Size; j++) {
			Tile tile;
			tile.makeCommon(EnemyCountCommon);
			int Chance = 1 + rand() % 100;
			if (Chance >= (100 - CaveChance))
				tile.makeCave(EnemyCountCave);
			Field_[i][j] = tile;
		}
	}
}

void GameField::setPlayerPostion(int NumRow, int NumCol, bool isTherePlayer) {
	Field_[NumRow][NumCol].setPlayerPosition(isTherePlayer);
}

string GameField::getTileType(int NumRow, int NumCol) const{
	return Field_[NumRow][NumCol].getType();
}

int GameField::getSize() const {
	return this->Size_;
}

ostream& operator<<(ostream& stream, const GameField& GF) {
	for (int i = 0; i < GF.Size_; i++) {
		for (int j = 0; j < GF.Size_; j++) {
			stream << GF.Field_[i][j].getShortType();
		}
		stream << "\n";
	}
	return stream;
}
