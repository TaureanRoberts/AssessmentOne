#pragma once
#include "Player.h"
#include "Point2D.h"

class Dungeon
{
private:
	Point2D *mRooms;
	Player *mPlayer;
	int mCols;
	int mRows;
public:
	Dungeon();
	~Dungeon();
	Dungeon(Player *player, int rows, int cols);
	bool CheckPlayerPosition();
	void genRooms();
};