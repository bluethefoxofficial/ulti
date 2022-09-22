#include "game.h"
#include "genlevel.h"

using std::cout;
using std::cin;
using std::endl;


	std::string p1;
	
	void startgame() {
		cout << "===PLAYER NAME===" << endl;
		cin >> p1;
		cout << "welcome " << p1 <<"\n";
	}

	void setupgameenv() {
		genlevel lev = genlevel(); lev.generate();
		//setup the game enviroment.
	}