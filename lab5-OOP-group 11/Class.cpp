#include "Header.h"
//Base Constructor.
GameCharacter ::GameCharacter(){
	cout << "The default constructor is called" << endl;
		this->tools = new string[3];
		this->name = new string;
		*name = "Mario";
		tools[0] = "axe";
		tools[1] = "shovel";
		tools[2] = "gun";
}
//Parameterized Constructor
GameCharacter :: GameCharacter(string name, string tool[3]) {
		cout << "The parameterized constructor is called" << endl;
		this->name = new string;
		this->tools = new string[3];
		*this->name = name;
		this->tools = tool;
		
		
}
//Copy Constructor
GameCharacter::GameCharacter(GameCharacter& copy) {
	cout << "The copy constructor is called" << endl;
	name = new string;
	tools = new string[3]; 
	*name = *copy.name;
	tools[0]= *(copy.tools);
	tools[1] = *(copy.tools + 1);
	tools[2] = *(copy.tools + 2);
}
//Changes the characters name
void GameCharacter :: setname(string a){
	*name = a;
	cout << "Character name Successfully Changed" << endl;
}
//Changes the characters tools
void GameCharacter :: settools(string b[3]) {
	tools[0] = b[0];
	tools[1] = b[1];
	tools[2] = b[2];
	cout << "Tools Successfully Changed" << endl;


}


//Overloading to allowing printing of object.
ostream& operator <<(ostream& cout, GameCharacter& player) {

	cout << "character name: " << *player.name << "" << endl;
	cout << "tools: " << player.tools[0] << "," << player.tools[1] << "," << player.tools[2] << endl;
	return cout;
}




