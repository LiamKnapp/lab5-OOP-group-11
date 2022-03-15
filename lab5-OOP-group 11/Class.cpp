#include "Header.h"

GameCharacter ::GameCharacter(){
	cout << "The default constructor is called" << endl;
		this->tools = new string[3];
		this->name = new string;
		*name = "Mario";
		tools[0] = "axe";
		tools[1] = "shovel";
		tools[2] = "gun";
}

GameCharacter :: GameCharacter(string name, string tool[3]) {

		this->name = new string;
		this->tools = new string[3];
		*this->name = name;
		this->tools = tool;
		
		cout << "The parameterized constructor is called" << endl;
}

GameCharacter::GameCharacter(GameCharacter& copy) {
	cout << "The copy constructor is called" << endl;
	//string toolnames = *(copy.tools +1);
	name = new string;
	tools = new string[3]; 
	*name = *copy.name;
	tools[0]= *(copy.tools);
	tools[1] = *(copy.tools + 1);
	tools[2] = *(copy.tools + 2);
}

void GameCharacter :: setname(string a){
	*name = a;
	cout << "Character name Successfully Changed" << endl;
}

void GameCharacter :: settools(string b[3]) {
	tools[0] = b[0];
	tools[1] = b[1];
	tools[2] = b[2];
	cout << "Tools Successfully Changed" << endl;


}

void GameCharacter :: printcharacter() {

		cout <<"character name: "<< *name <<""<< endl;
		cout <<"tools: " << tools[0] << "," << tools[1] << "," << tools[2] << endl;

}

