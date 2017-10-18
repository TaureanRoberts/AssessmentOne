#include <iostream>
#include "Dungeon.h"


void Dungeon::genRooms()
{

}

Dungeon::Dungeon()
{
 mRooms = new Point2D();
	mPlayer = new Player();
	mCols = 5;
	mRows = 5;
	genRooms();
}

Dungeon::~Dungeon()
{
}

Dungeon::Dungeon(Player * player, int rows, int cols)
{

}

bool Dungeon::CheckPlayerPosition()
{

	return false;
}
