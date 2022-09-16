#include "game.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;


	string playername = "";
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

	}