#include "genlevel.h"
#include <iostream>
#include <string>

class levelgeneration {
	int seed = std::rand(); //UNUSED currently
	char previouslevel[20][20] = {};
	char level[20][20] = {}; //a level is 20x20 the draw.cpp script handles drawing on the screen for the level.
	char materials[8] = {
		'D', //dirt
		'G', //grass
		'W', //water
		'T', //gravel
		'A'  //Missing TODO: add Add a material for this or just remove it.
	};
	void destroy() { //destroy the level MAKE SURE YOU CHANGE LEVEL FIRST BEFORE DESTROYING!
		
	}

	void change() {
		//changes the level USE BEFORE DESTROY
		
	}
	
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

void genlevel::generate()
{
}
