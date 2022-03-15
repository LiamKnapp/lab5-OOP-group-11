//Liam, Ilyas, Tony

#include "Header.h";
#include <string>

int main() {
	string name = "Link";
	string toolset1[3] = { "raygun", "excalibur", "watering can" };
	string toolset2[3] = { "bomb", "knife", "rifle" };
	GameCharacter p1(name, toolset1); 
	cout << "character 1" << endl;
	//This prints character 1.
	cout << p1 << endl;
	cout << endl;
	GameCharacter p2 = p1; 
	cout << endl;
	cout << "character 2" << endl;
	//This prints character 2.
	cout << p2 << endl;
	cout << endl;
	//This is to test the copy constructor to see if it is a deep copy. Character 1 will have a different name and different tool set from Character 2.
	string Fox = "Fox McCloud";
	p1.setname(Fox);; 
	p1.settools(toolset2);
	cout << "character 1" << endl;
	cout << p1 << endl;
	cout << endl;
	cout << "character 2" << endl;
	cout << p2 << endl;
	cout << endl;
	GameCharacter p3;
	cout << "character 3" << endl;
	//This prints character 3.
	cout << p3 << endl;




	return 0;
}