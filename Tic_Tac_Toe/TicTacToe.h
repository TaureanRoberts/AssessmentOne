#pragma once
class MyGrid
{
private:
	char Grid2D[3][3] = { { '7','8','9' },{ '4','5','6' },{ '1','2','3' } };
	//Prototype: char Grid2D[3][3] = {{'7','8','9'},{'4','5','6'}, {'1','2','3'}}
	//Description: Hard sets the values to match the number pad on the keyboard
	//Arguments: N/A
	//Precondition:Hard Sets values in the grid
	//Postcondition: Gives user some visual reference to the positions
	//Protection Level: Private

	char mPlayer;
	//Prototype: char mPlayer;
	//Description: initialize the Player turn rules
	//Arguments: N/A
	//Precondition: Covers the player cycle process.
	//Postcondition: Returns the player piece rotation
	//Protection Level: Private

public:
	MyGrid();

	void DisplayGrid();
	//Prototype: void DisplayGrid();
	//Description: Shows the area in which the grid will appear
	//Arguments: N/A
	//Precondition: Gives the values that are being placed boundries to not pass.
	//Postcondition: Allows user input from the PlayPiece() function personal slot
	//Protection Level:	Public

	bool CheckDraw(bool &gameover);
	//Prototype: void ClearGrid();
	//Description: 
	//Arguments: N/A
	//Precondition:
	//PostCondition:
	//Protection Level: Public

	void PlayerMove(char &num, char &player);
	//Prototype: void Playerinfo(char player1, char player2);
	//Description: Displays info about the current player turn.
	//Arguments: N/A
	//Precondition:
	//Postcondition:
	//Protection Level: Public

	void DrawGrid();
	//Prototype: void DrawGrid();
	//Description: Updates the grid with the pieces that were placed in the slots.
	//Arguments: N/A
	//Precondition: Sees the input and checks if its been placed in the grid
	//Postcondition: Creates a visual history of player pieces for the current match
	//Protection Level: Public

	bool WinCondition();
	//Prototype: bool WinCondition();
	//Description: Checks Win Condition
	//Arguments: N/A
	//Precondition: Runs game until someone meets the win condition
	//Postcondition: Ends application
	//Protection Level: Public
};