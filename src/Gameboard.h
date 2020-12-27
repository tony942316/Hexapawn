#pragma once

class Gameboard
{
public:
	Gameboard();

public:
	void mov(int pos, int dest);
	void print();

private:
	const char* curBoard[9] = { "X", "X", "X",
							    "-", "-", "-",
							    "O", "O", "O" };
};

