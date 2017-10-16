#include <iostream>
#include "Player.h"
#include "Point2D.h"

Player::Player()
{
	Point2D* mPosition = new Point2D();
	mHealth = 100;
	mName = "Bob";
}

Player::Player(char *name)
{
	int mName = *name;
}

void Player::Move(char direction)
{
	int Move = (2, 1);
}

void Player::SetPosition(Point2D mPos)
{
	Point2D currentPos;
	currentPos = mPos;
}