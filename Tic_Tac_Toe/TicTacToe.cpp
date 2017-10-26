#include "TicTacToe.h"
#include <iostream>
#include <string>

using namespace std;
MyGrid::MyGrid()
{
}
void MyGrid::DisplayGrid()
{   
	cout << "                      " << endl;
	cout << " " << Grid2D[0][0] << " | " << Grid2D[0][1] << " | " << Grid2D[0][2] << endl;
	cout << "===========" << std::endl;
	cout << " " << Grid2D[1][0] << " | " << Grid2D[1][1] << " | " << Grid2D[1][2] << endl;
	cout << "===========" << std::endl;
	cout << " " << Grid2D[2][0] << " | " << Grid2D[2][1] << " | " << Grid2D[2][2] << endl;
	cout << "                      " << endl;
}

bool MyGrid::CheckDraw(bool &gameover)
{
	int n = 1;
    int i = 0;		
	int j = 0;
    int counter = 0;	
	for (i = 0; i < 3; i++)
	{
        for (j = 0; j < 3; j++)
		{				
			if (Grid2D[i][j] == '0' + n)
			{
			 counter++;
			}
			n++;				
		}
	}
	if (counter < 1)
	{
		cout << "It's a draw!\n\n";
		gameover = true;
	}
		return gameover;
}

void MyGrid::PlayerMove(char &num, char &player)
{
	int i = 0;
		int j = 0;
		bool WrongMove = true; //If true, the player has made a wrong move
		for (i = 0; i < 3; i++)
		{
				for (j = 0; j < 3; j++)
				{ //Mark square with X or O if WrongMove is not true
						if (Grid2D[i][j] == num)
						{
								Grid2D[i][j] = player; //Assigns the space with the X or O, depending on the table.
								WrongMove = false;
						}
				}
	}
	if (WrongMove == true) { cout << "Wrong move!\n"; }
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