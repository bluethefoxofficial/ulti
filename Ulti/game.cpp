#include "game.h"
#include "genlevel.h"
#include "draw.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


	std::string p1;
	
	void startgame() {
		cout << "===PLAYER NAME===" << endl;
		cin >> p1;
		cout << "welcome " << p1 <<"\n";

		setupgameenv();
	}

	void setupgameenv() {
		genlevel lev = genlevel(); lev.generate();
		//setup the game enviroment.

		

	
	}