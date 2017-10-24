#pragma once

class MyGrid
{
private:
	char Grid2D[3][3] = {{'7','8','9'},{'4','5','6'}, {'1','2','3'}};
	char mPlayer = 'X';
	char mPlayer2 = 'O';
public:
	void DisplayGrid();
	void PlayPiece();
	void DrawGrid();
	void ClearGrid();
	bool WinCondition();
};