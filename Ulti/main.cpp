#include <iostream>
#include <string>
#include "main.h"


//i need these to be global, as these will be changed and can be changed by the player and other scripts.
std::string playername = "";
int playerscore = 0;

int main() {
	//just an entry point for the game itself nothing much here.
	

	//redoing the whole thing -_- because im a idiot and managed to break it, i shouldnt code when tired.



	playerinit();

	return 0;
}



void playerinit() {
	std::string x = "";
	std::cout << "Whats your name?\n";
	std::cin >> x;
	Clear();
	std::cout << "Nice to meet you " << x << " now lets begin\nn < newgame\nl < Load game\ne < Exit game\n>";

	std::string action = "";
	std::cin >> action;

	playername = x;

	x = "";

	if (action == "n") {
		std::cout << "Generating and initilizing new level....";
	}
	else if (action == "l") {
		std::cout << "Please select a level file...";
	}
	else if (action == "e") {
		std::cout << "exising";
		return;
	}
	else if (action == "a") {
		std::cout << "About \n Ulti by kesssan robertspn 2022.";
	}

 	
}

void Clear()
{
	//clears the console making it empty and ready for the next output via cout
	std::cout << "\x1B[2J\x1B[H";
}