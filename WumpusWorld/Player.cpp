#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
	Point2D *mPosition = new Point2D();
	mName;
	cout << "Enter your name \n";
	cin >> mName;
}

Player::Player(char *name)
{
	int mName = *name;
}

void Player::MovePlayer(char * place)
{
	int MovePlayer = (1,0);
}

void Player::SetPosition(Point2D mPos)
{
	Point2D newPos;
	newPos = mPos;
}

bool Player::WumpusAppears()
{


	return false;
}

