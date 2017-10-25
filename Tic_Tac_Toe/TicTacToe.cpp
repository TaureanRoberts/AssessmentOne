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

bool MyGrid::PlayPiece()
{
	char player1 = 'X';
	char player2 = 'O';

	int x;
	cout << "Choose a number from 1 to 9 to mark your place." << endl;
	cin >> x;
	if (x == 7 && (Grid2D[0][0] != player1 || Grid2D[0][0] != player2))
	{
		Grid2D[0][0] = mPlayer;
	}
	else if (x == 8 && (Grid2D[0][1] != player1 || Grid2D[0][1] != player2))
	{
		Grid2D[0][1] = mPlayer;
	}
	else if (x == 9 && (Grid2D[0][2] != player1 || Grid2D[0][2] != player2))
	{
		Grid2D[0][2] = mPlayer;
	}
	else if (x == 4 && (Grid2D[1][0] != player1 || Grid2D[1][0] != player2))
	{
		Grid2D[1][0] = mPlayer;
	}
	else if (x == 5 && (Grid2D[1][1] != player1 || Grid2D[1][1] != player2))
	{
		Grid2D[1][1] = mPlayer;
	}
	else if (x == 6 && (Grid2D[1][2] != player1 || Grid2D[1][2] != player2))
	{
		Grid2D[1][2] = mPlayer;
	}
	else if (x == 1 && (Grid2D[2][0] != player1 || Grid2D[2][0] != player2))
	{
		Grid2D[2][0] = mPlayer;
	}
	else if (x == 2 && (Grid2D[2][1] != player1 || Grid2D[2][1] != player2))
	{
		Grid2D[2][1] = mPlayer;
	}
	else if (x == 3 && (Grid2D[2][2] != player1 || Grid2D[2][2] != player2))
	{
		Grid2D[2][2] = mPlayer;
	}
	else
	{
		cout << "Cant choose this position." << endl;
	}
	return false;
}

void MyGrid::DrawGrid()
{
	if (mPlayer == 'X')
	{
		mPlayer = 'O';
	}
	else
		mPlayer = 'X';
}

bool MyGrid::WinCondition()
{
	char player1 = 'X';
	char player2 = 'O';
	for (int i = 0; i < 3; i++)
	{
		if ((Grid2D[i][0] == player1 || player2) && (Grid2D[i][0] == Grid2D[i][1]) && (Grid2D[i][1] == Grid2D[i][2]))
		{
			cout << "Woah Partner, you showed no mercy.\n";
			return true;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if ((Grid2D[0][i] == player1 || player2) && (Grid2D[0][i] == Grid2D[1][i]) && (Grid2D[1][i] == Grid2D[2][i]))
		{
			cout << "I feel sorry for the other player.\n";
			return true;
		}
	}
	if ((Grid2D[0][0] == player1 || player2) && (Grid2D[0][0] == Grid2D[1][1]) && (Grid2D[1][1] == Grid2D[2][2]))
	{
		cout << "You are one classy player. Congrats\n";
		return true;
	}
	if ((Grid2D[2][0] == player1 || player2) && (Grid2D[2][0] == Grid2D[1][1]) && (Grid2D[1][1] == Grid2D[0][2]))
	{
		cout << "Winner Winner Chicken dinner\n";
		return true;
	}
	return false;
}