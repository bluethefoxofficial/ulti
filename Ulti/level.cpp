
#include <iostream>
#include "level.h"

char level[5][5] = { 
'0', '0', '0', '0', '0', 
'0', '0', '0', '0', '0', 
'0', '0', '0', '0', '0', 
'0', '0', '0', '0', '0', 
'0', '0', '0', '0', '0'
};
char materials[5] = { 'W','G','D','R','B'  };
/*
* key refrences
W = water
G = grass
D = dirt
R = wood
B = leaves
*/


//generate level
void generateLevel() {
for (int i = 0; i < 5; i++) {
for (int j = 0; j < 5; j++) {
level[i][j] = materials[rand() % 5];
}
}
}

//print level
void printLevel() {
for (int i = 0; i < 5; i++) {
for (int j = 0; j < 5; j++) {
std::cout << level[i][j] << " ";
}
std::cout << std::endl;
}
}


//get materials
char* getMaterials() {
return materials;
}

//get material
char getMaterial(int index) {
return materials[index];
}

//get level size
int getLevelSize() {
return sizeof(level) / sizeof(level[0]);
}

//get material size
int getMaterialsSize() {
return sizeof(materials) / sizeof(materials[0]);
}

//get material index
int getMaterialIndex(char material) {
for (int i = 0; i < getMaterialsSize(); i++) {
if (material == materials[i]) {
return i;
}
}
}

//get material value
int getMaterialValue(char material) {
switch (getMaterialIndex(material)) {
case 0:
return 1;
case 1:
return 2;
case 2:
return 3;
case 3:
return 4;
case 4:
return 5;
}
}

//get total value
int getTotalValue() {
int total = 0;
for (int i = 0; i < getLevelSize(); i++) {
for (int j = 0; j < getLevelSize(); j++) {
total += getMaterialValue(level[i][j]);
}
}
return total;
}

//get material count
int getMaterialCount(char material) {
int count = 0;
for (int i = 0; i < getLevelSize(); i++) {
for (int j = 0; j < getLevelSize(); j++) {
if (level[i][j] == material) {
count++;
}
}
}
return count;
}




void setBlock(char block, int x, int y) {
if (x >= 0 && x < 5 && y >= 0 && y < 5) {
level[x][y] = block;
}
}

int main() {
printLevel();
std::cout << std::endl;


}

void destroy() {
	level[0, 0];
	level[0, 1];
	level[0, 2];
	level[0, 3];
	level[0, 4];
	level[0, 5];
	level[1, 0];
	level[1, 1];
	level[1, 2];
	level[1, 3];
	level[1, 4];
	level[1, 5];
	level[2, 0];
	level[2, 1];
	level[2, 2];
	level[2, 3];
	level[2, 4];
	level[2, 5];
	level[3, 0];
	level[3, 1];
	level[3, 2];
	level[3, 3];
	level[3, 4];
	level[3, 5];
	level[4, 0];
	level[4, 1];
	level[4, 2];
	level[4, 3];
	level[4, 4];
	level[4, 5];
	level[5, 0];
	level[5, 1];
	level[5, 2];
	level[5, 3];
	level[5, 4];
	level[5, 5];


}


void loadfromfile(std::string file) {
	

}