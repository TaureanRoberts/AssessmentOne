#include <iostream>
#include "TicTacToe.h"
using namespace std;

int main()
{
	MyGrid game;
	cout << "Tic Tac Toe Anyone? \n";
	while (game.WinCondition() == false)
	{
	game.DisplayGrid();
	game.DrawGrid();
	game.PlayPiece();
	game.ClearGrid();
    }

	system("pause");
}