#include "grid.h"
#include <iostream>

using namespace std;

void Grid2D::DrawGrid()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << PlaySpace[i][j] << "  ";
		}
		cout << endl;
	}
}

void Grid2D::PlayerInput()
{
	char i;
	while (isInputBad == true)
	{
		cout << "Use the numberpad to place your marker. \n";
		cin >> i;
		if (i < 1 || i > 9)
		{
			cout << "Not an aplicable choice." << endl;
		}
		else
			isInputBad = false;
	}
}

bool Grid2D::PlayerPlacement(int x, int y, char currentPlayer)
{
	if (PlaySpace[x][y] != '7','8','9','4','5','6','1','2','3')
	{
		return false;
	}
	PlaySpace[x][y] = currentPlayer;
	return true;
}

bool Grid2D::MoveRules()
{
	bool x = PlayerPlacement;
	int y =  
    isDone;
	int turn = 0;
	while (isDone == false)
	{
		DrawGrid();
		PlayerInput();
		if (PlayerPlacement() == false)
		{

		}
		
	}
	return false;
}


bool Grid2D::WinCondition(char currentPlayer)
{
    for (int i = 0; i < 3; i++) 
	{ 
		if ((PlaySpace[i][0] == currentPlayer) && (PlaySpace[i][0] == PlaySpace[i][1]) && (PlaySpace[i][1] == PlaySpace[i][2])) 
		{
			return true;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if ((PlaySpace[0][i] == currentPlayer) && (PlaySpace[0][i] == PlaySpace[1][i]) && (PlaySpace[1][i] == PlaySpace[2][i])) 
		{
			return true; 
		}
	}
	if ((PlaySpace[0][0] == currentPlayer) && (PlaySpace[0][0] == PlaySpace[1][1]) && (PlaySpace[1][1] == PlaySpace[2][2])) 
	{
		return true; 
	}
	if ((PlaySpace[2][0] == currentPlayer) && (PlaySpace[2][0] == PlaySpace[1][1]) && (PlaySpace[1][1] == PlaySpace[0][2])) 
	{
		return true; 
	}
	return false;
}

void Grid2D::turnChecking()
{
	char playerOne = 'X';
	char playerTwo = 'O';
	char playerTurn = playerOne;
	if (playerTurn == playerOne)
		playerTurn = playerTwo;
	else
		playerOne = playerOne;
}