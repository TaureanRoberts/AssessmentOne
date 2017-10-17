#pragma once
#include"Point2D.h"

class Player
{
private:
	char* mName;
	Point2D* mPos;
	int mHealth;
public:
	Player();
	Player(char name);
	void MovePlayer(char *place);
	void SetPosition(Point2D *newPos);


};