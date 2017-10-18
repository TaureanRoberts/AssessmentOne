#pragma once
#include"Point2D.h"

class Player
{
private:
	char* mName;
	Point2D* mPosition;
public:
	Player();
	Player(char *name);
	void MovePlayer(char *place);
	void SetPosition(Point2D mPos);
	bool WumpusAppears();
};