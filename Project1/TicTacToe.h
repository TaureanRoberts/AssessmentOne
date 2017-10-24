#pragma once

class MyGrid
{
private:
	char Grid2D[3][3] = {{'7','8','9'},{'4','5','6'}, {'1','2','3'}};
	char mPlayer;
public:
	void DisplayGrid();
	bool PlayPiece();
	void DrawGrid();
	void ClearGrid();
	bool WinCondition();
};