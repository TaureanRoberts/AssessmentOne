#include "Lair.h"
#include <iostream>

using namespace std;

Lairs::Lairs()
{
}

Lairs::~Lairs()
{
}

Lairs::Lairs(Point2D cord, int w)
{
	mRooms = new Lairs[5];
	mPosition = cord;
	mItems = w;
}

void Lairs::mNearRooms()
{

}

void Lairs::mInfoRooms()
{
	for (int i = 0; i < roomNum; i++)
	{
		if (mRooms[i].mItems == 3)
		{
			cout << "You smell a smelly smell, that smells. \n";
		}
		else if (mRooms[i].mItems == 4)
		{
			cout << "You feel a chill coming on. \n";
		}
		else if (mRooms[i].mItems == 1)
		{
			cout << "Oh! You see a shiny light! \n";
		}
	}
}
