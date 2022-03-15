#pragma once
#include <iostream>
using namespace std;
class GameCharacter {
	string* name;
	string* tools;

public:
	GameCharacter();
	GameCharacter(string name, string tool[3]);
	GameCharacter(GameCharacter& copy);
	void setname(string a);
	void settools(string tools[3]);
	void printcharacter();
};