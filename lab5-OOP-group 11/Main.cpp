//Liam, Ilyas, Tony

#include "Header.h";
#include <string>

int main() {
	string name = "Link";
	string toolset1[3] = { "raygun", "excalibur", "watering can" };
	string toolset2[3] = { "bomb", "knife", "rifle" };
	GameCharacter p1(name, toolset1); 
	cout << "character 1" << endl;
	p1.printcharacter();
	cout << endl;
	GameCharacter p2 = p1; 
	cout << endl;
	cout << "character 2" << endl;
	p2.printcharacter(); 
	cout << endl;
	string Fox = "Fox McCloud";
	p1.setname(Fox);; 
	p1.settools(toolset2);
	cout << "character 1" << endl;
	p1.printcharacter();
	cout << endl;
	cout << "character 2" << endl;
	p2.printcharacter();
	cout << endl;
	GameCharacter p3;
	cout << "character 3" << endl;
	p3.printcharacter();
	return 0;
}