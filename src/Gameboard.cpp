#include "Gameboard.h"

#include <iostream>

Gameboard::Gameboard()
{
}

void Gameboard::mov(int pos, int dest)
{

}

void Gameboard::print()
{
	for (int i = 0; i < 9; i++)
	{
		std::cout << curBoard[i] << ' ';

		if ((i + 1) % 3 == 0)
		{
			std::cout << '\n';
		}
	}
}