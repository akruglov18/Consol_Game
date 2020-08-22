#include"Tiles.h"

Tile::Tile(){
	this->Type_ = "None";
	this->MaxEnemyCount_ = -1;
	this->isTherePlayer_ = false;
	this->ShortType_ = "None";
}

Tile::Tile(const Tile& tile) {
	*this = tile;
}

void Tile::makeCommon(const int& MaxEnemyCount) {
	this->Type_ = "Common";
	this->ShortType_ = "O";
	this->MaxEnemyCount_ = MaxEnemyCount;
	int RandCount = MaxEnemyCount * 2 / 3 + rand() % MaxEnemyCount / 3;
	Enemies_.resize(RandCount);
	for (int i = 0; i < RandCount; i++) {
		Enemies_[i] = new Skeleton();
	}
}

void Tile::makeCave(const int& MaxEnemyCount) {
	this->Type_ = "Cave";
	this->ShortType_ = "#";
	this->MaxEnemyCount_ = MaxEnemyCount;
	int RandCount = MaxEnemyCount * 2 / 3 + rand() % MaxEnemyCount / 3;
	Enemies_.resize(RandCount);
	for (int i = 0; i < RandCount; i++) {
		Enemies_[i] = new Skeleton();
	}
}

void Tile::setPlayerPosition(bool isThere) {
	this->isTherePlayer_ = isThere;
}

string Tile::getType() const{
	return this->Type_;
}

string Tile::getShortType() const {
	if (this->isTherePlayer_)
		return "+";
	return this->ShortType_;
}

Tile& Tile::operator=(const Tile &tile) {
	if (this == &tile)
		return *this;
	this->Type_ = tile.Type_;
	this->ShortType_ = tile.ShortType_;
	this->MaxEnemyCount_ = tile.MaxEnemyCount_;
	this->Enemies_.resize(tile.Enemies_.size());
	for (int i = 0; i < tile.Enemies_.size(); i++)
		this->Enemies_[i] = tile.Enemies_[i];
	return *this;
}