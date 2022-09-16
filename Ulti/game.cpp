#include "game.h"
#include "genlevel.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;


	string playername = "";
	int playerscore;
	int playerhealth = 3;
	void startgame() {
		cout << "===PLAYER NAME===" << endl;
		cin >> playername;
		cout << "welcome " << playername << "\nReady to begin?\nY/N>";
	
		string tmp = "";
		cin >> tmp;

		if (tmp == "Y") {
			setupgameenv();
		}
		else if (tmp == "y") {
			setupgameenv();
		}
		else {
			exit(0);
		}

	}

	void setupgameenv() {
		genlevel lev = genlevel(); lev.generate();
	}