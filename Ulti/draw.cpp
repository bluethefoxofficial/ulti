#include "draw.h"
#include "game.h"
#include <iostream>


using std::cout;

void Clear()
{
	//clear the ui ready for the next draw.
	cout << "\x1B[2J\x1B[H";
}

void drawenviromentui() {
	//draws the enviroment ui place above drawui unless you want the score ui to be above the enviroment
}

void drawui() {
   cout << "\n    playername:\n    " 
		<< playername 
		<< "\n\n    Player score:\n"
		<< playerscore;
}

void drawhealth() {
	string healthbar = "";
	cout << "\nHealth: ";
}