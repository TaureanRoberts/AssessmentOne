#include <iostream>
#include "grid.h"
using namespace std;
int main()
{
	cout << "Tic Tac Toe Anyone? \n";
	bool isDone = false;
	Grid2D game;
	while (isDone == false)
	{
		game.DrawGrid();
		game.MoveRules();

	}

	system("pause");
}