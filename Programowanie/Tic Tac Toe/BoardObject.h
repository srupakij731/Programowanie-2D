#pragma once
#include <vector>

class BoardObject
{
	char mark;
	int playerType;

public:
	static void CreateBoard(int boardLength);

	static bool ValidMove(int row, int col);
	static bool CheckWin(char mark);
	static bool CheckDraw();

	static void PrintBoard();


	static std::vector<std::vector<char>> GetBoard();
	static void SetBoard(int row, int col, char mark);

	static int GetBoardSize();
};




