#pragma once

class Grid2D
{
private:
	char PlaySpace[3][3] = {{'7','8','9'},{'4','5','6'}, {'1','2','3'}};
	bool isInputBad = true;
public:
    bool isDone = false;
	void DrawGrid();
	void PlayerInput();
	bool PlayerPlacement(int x, int y, char currentPlayer);
	bool MoveRules();
	bool WinCondition(char currentPlayer);
	void turnChecking();
};