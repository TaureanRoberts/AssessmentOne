#pragma once
#include "Point2D.h"

class Lairs
{
public:
	Point2D mPosition;
	int mItems;
	Lairs *mRooms;
	int roomNum;
	Lairs();
	~Lairs();
	Lairs(Point2D cord, int w);
	void mNearRooms();
	void mInfoRooms();
};