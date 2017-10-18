#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
	mPosition = new Point2D();
	mName = "Taurean";
}

Player::~Player()
{
}

Player::Player(char *name)
{
	mPosition = new Point2D();
	mName = name;
}

void Player::MovePlayer(char * place)
{
	int direction;
	cout << "Enter one of the W.A.S.D. keys to move in the dungeon:\n";
	cout << "\n";
	cin >> direction;
	cout << "\n";

	if (direction == 87 || 119)
	{//The W key
		*mPosition = *mPosition + Point2D(0,1);
		cout << "You take head straight ahead\n";
	}
	else if (direction == 65 || 97)
	{//The A key
		*mPosition = *mPosition + Point2D(-1,0);
		cout << "You take a left turn\n";
	}
	else if (direction == 83 || 115)
	{//The S key
		*mPosition = *mPosition + Point2D(0,-1);
		cout << "You take a step back\n";
	}
	else if (direction == 68 || 100)
	{
		*mPosition = *mPosition + Point2D(1,0);
		cout << "You make a right turn\n";
	}
	else
		cout << "Not correct input, Try Again. \n";
}

void Player::SetPosition(Point2D *mPos)
{
	mPosition = mPos;
}

Point2D Player::GetOrigin()
{
	return *mPosition;
}

