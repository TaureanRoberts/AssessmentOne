#pragma once

class Grid2D
{
private:
	char PlaySpace[3][3] = { {'7','8','9'},{'4','5','6'}, {'1','2','3'} };
public:
	void ShowGrid();
	void MovePlayer(char player);
	void OriginPlayer(char player);
	bool MoveRules();
	bool DidWin();
	bool DidWeTie();
};