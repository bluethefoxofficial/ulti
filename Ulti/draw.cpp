#include "draw.h"
#include "game.h"
#include <iostream>


using std::cout;


int health = 100;
void Clear()
{
	//clear the ui ready for the next draw.
	cout << "\x1B[2J\x1B[H";
}

void drawenviromentui()

{
	
	//TODO MAKE THIS
	cout << "=======================================================\n";
	cout << "|\n";
	cout << "|\n";
	cout << "|\n";
	cout << "|\n";
	cout << "|\n";
	cout << "|\n";
	cout << "|\n";
	cout << "|\n";
	cout << "|\n";
	cout << "|\n";
	cout << "|\n";
	cout << "|\n";
	cout << "|\n";
	cout << "|\n";
	cout << "|\n";
	cout << "|\n";
	cout << "|\n";
	cout << "|\n";
	cout << "|\n";
	cout << "|\n";
	cout << "=======================================================\n";
}

void drawui()
{
	
	cout << "\n    playername:\n    "

		<< "\n\n    Player score:\n";
		
}

void drawhealth()
{
	cout << "\n    Health: " << health << "\n";
}
