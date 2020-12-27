#include "tLib.h"
#include "Gameboard.h"

#include <iostream>

int main()
{
	std::cout << "Hello world.\n";

	Gameboard board;

	board.print();

	t::Complete();
	return 0;
}