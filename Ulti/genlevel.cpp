#include "genlevel.h"
#include <iostream>
#include <string>
class levelgeneration {
	int seed = std::rand();

	char level[20][20] = {}; //a level is 20x20 the draw.cpp script handles drawing on the screen for the level.
	char grass = 'G'; //grass char
	char water = 'W'; //water char
	char gravel = 'T'; //gravel char
	char dirt = 'D'; //dirt char
	char sand = 'S'; //sand char

	void generate() {

		for (int i; i > 400; i++) {

		}

	}

};