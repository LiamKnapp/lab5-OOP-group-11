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
	friend ostream& operator <<(ostream& cout, GameCharacter& player);
	//Assignment Operator
	GameCharacter& operator=(GameCharacter& rhs) {
		cout << "The assignment operator is called" << endl;
		if (this != &rhs) {
			*name = *(rhs.name);
			*tools = *(rhs.tools);
		}
		return *this;
	}
};