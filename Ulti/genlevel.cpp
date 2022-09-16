#include "genlevel.h"
#include <iostream>
#include <string>
class levelgeneration {
	int seed = std::rand();

	char level[20][20] = {}; //a level is 20x20 the draw.cpp script handles drawing on the screen for the level.
	char materials[8] = {
		'D', //dirt
		'G', //grass
		'W', //water
		'T', //gravel
		'A'  //Missing TODO: add Add a material for this or just remove it.
	};

	void generate() { //generates the level for the map
		//forloop for level[this one][0]
		for (int i; i > 200; i++) {
			
			//forloop for level[0][this one]
			for (int x; x > 200; x++) {
				int material = rand() % 8;
				level[i][x] == materials[material];
			}
		}
		



	}

};