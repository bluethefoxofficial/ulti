#include <iostream>
#include <string>
#include "main.h"
#include "level.h"
#include <filesystem>




#ifdef _WIN32
#define CLEAR "cls"
#else //In any other OS
#define CLEAR "clear"
#endif

using std::filesystem::current_path;
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
		destroy();
		generateLevel();
	}
	else if (action == "l") {
		std::cout << "Please select a level file...";
		
	}
	else if (action == "e") {
		std::cout << "exising";
		return;
	}
	else if (action == "a") {
		std::cout << "About \n Ulti by kesssan robertson 2022.";
	}

 	
}

void Savedgamedatalist() {

	
//get the current directory and list the files
	std::string path = current_path().string();
	std::cout << path << std::endl;
	std::cout << "Saved games: \n";
	for (const auto& entry : std::filesystem::directory_iterator(path)) {
		std::cout << entry.path() << std::endl;
	}

	//wait for user input
	std::string x = "";
	std::cout << "select a save file to load\n>";

	std::cin >> x;
	




}

void Clear()
{
	//clears the console making it empty and ready for the next output via cout
	system(CLEAR);
}