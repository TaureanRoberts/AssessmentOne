#include "TicTacToe.h"
#include <iostream>
using namespace std;
void MyGrid::DisplayGrid()
{
    cout << " " << Grid2D[0][0] << " | " << Grid2D[0][1] << " | " << Grid2D[0][2] << endl;
	cout << "===========" << std::endl;
	cout << " " << Grid2D[1][0] << " | " << Grid2D[1][1] << " | " << Grid2D[1][2] << endl;
	cout << "===========" << std::endl;
	cout << " " << Grid2D[2][0] << " | " << Grid2D[2][1] << " | " << Grid2D[2][2] << endl;
}

void MyGrid::PlayPiece()
{
	int x;
	cout << "Choose a number from 1 to 9 to mark your place." << endl;
	cin >> x;
	if (x == 7)
		Grid2D[0][0] = mPlayer;
	else if (x == 8)
		Grid2D[0][1] = mPlayer;
	else if (x == 9)
		Grid2D[0][2] = mPlayer;
	else if (x == 4)
		Grid2D[1][0] = mPlayer;
	else if (x == 5)
		Grid2D[1][1] = mPlayer;
	else if (x == 6)
		Grid2D[1][2] = mPlayer;
	else if (x == 1)
		Grid2D[2][0] = mPlayer;
	else if (x == 2)
		Grid2D[2][1] = mPlayer;
	else if (x == 3)
		Grid2D[2][2] = mPlayer;
	else
		std::cout << "Cant choose this position." << std::endl;
}

void MyGrid::DrawGrid()
{
    
}

void MyGrid::ClearGrid()
{
	
}

bool MyGrid::WinCondition()
{
	for (int i = 0; i < 3; i++)
	{
		if ((Grid2D[i][0] == mPlayer) && (Grid2D[i][0] == Grid2D[i][1]) && (Grid2D[i][1] == Grid2D[i][2]))
		{
			return true;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if ((Grid2D[0][i] == mPlayer) && (Grid2D[0][i] == Grid2D[1][i]) && (Grid2D[1][i] == Grid2D[2][i]))
		{
			return true;
		}
	}
	if ((Grid2D[0][0] == mPlayer) && (Grid2D[0][0] == Grid2D[1][1]) && (Grid2D[1][1] == Grid2D[2][2]))
	{
		return true;
	}
	if ((Grid2D[2][0] == mPlayer) && (Grid2D[2][0] == Grid2D[1][1]) && (Grid2D[1][1] == Grid2D[0][2]))
	{
		return true;
	}
	return false;
}
