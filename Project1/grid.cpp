#include "grid.h"
#include <iostream>

using namespace std;

void Grid2D::ShowGrid()
{
	cout << "Tic Tac Toe Anyone? \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << PlaySpace[i][j] << "  ";
		}
		cout << endl;
	}
}

void Grid2D::MovePlayer(char player)
{
	int i;
	cout << "Use the numberpad to place your marker. \n";
	for (int i = 0; i < 9; i++)
	{
		if (i == 7)
			PlaySpace[0][0] = player;
		else if (i == 8)
			PlaySpace[0][1] = player;
		else if (i == 9)
			PlaySpace[0][2] = player;
		else if (i == 4)
			PlaySpace[1][0] = player;
		else if (i == 5)
			PlaySpace[1][1] = player;
		else if (i == 6)
			PlaySpace[1][2] = player;
		else if (i == 1)
			PlaySpace[2][0] = player;
		else if (i == 2)
			PlaySpace[2][1] = player;
		else if (i == 3)
			PlaySpace[2][2] = player;
		else
			std::cout << "Not an aplicable choice." << std::endl;
	}
}

void Grid2D::OriginPlayer(char player)
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}

bool Grid2D::MoveRules()
{
	return false;
}

bool Grid2D::DidWin()
{
	return false;
}

bool Grid2D::DidWeTie()
{
	return false;
}
