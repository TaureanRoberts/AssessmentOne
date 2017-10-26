#include <iostream>
#include "TicTacToe.h"
using namespace std;

int main()
{
	bool done = false, GameOver = false;
	char Player = 'O', num;
	MyGrid myGame;
	do
	{
		if (Player == 'X')
		{
			Player = 'O';
		}
		else
		{
			Player = 'X';
		}
		myGame.DisplayGrid();
		cout << "Player \"" << Player << "\" turn or (q) to quit> ";
		cin >> num;
		cout << "\n";
		if (num == 'q' || num == 'Q')
		{
			cout << "Goodbye!...\n"; break;
		}
		myGame.PlayerMove(num, Player);
		GameOver = myGame.WinCondition();
		GameOver = myGame.CheckDraw(GameOver);
		if (GameOver == true)
		{
			myGame.DisplayGrid();
			GameOver = false;
		}
	} while (!done); 
	


	system("pause");
}