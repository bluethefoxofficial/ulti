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

void drawenviromentui(char grid)

{
	
	//TODO MAKE THIS
	cout << "=======================================================\n";

	char mat[20][20];
	
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			std::cout << mat[i][j] << ' ';
		}
		std::cout << std::endl;
	}
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
