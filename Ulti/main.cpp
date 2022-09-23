#include <iostream>
#include <string>
#include "game.h"
#include "draw.h"

int main() {
	//just an entry point for the game itself nothing much here.
	
	startgame();
	Clear();
	drawenviromentui();
    drawui();
	drawhealth();

	return 0;
}