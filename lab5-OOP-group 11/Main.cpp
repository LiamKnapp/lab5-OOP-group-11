//Liam, Ilyas, Tony

#include "Header.h";
#include <string>;

int main() {
	string name = "Link";
	string toolset1[3] = { "raygun", "excalibur", "watering can" };
	string toolset2[3] = { "bomb", "knife", "rifle" };
	GameCharacter p1(name, toolset1); 
	p1.printcharacter();
	cout << endl;
	GameCharacter p2 = p1; 
	string Fox = "Fox McCloud";
	p1.setname(Fox);; 
	p1.settools(toolset2);
	p1.printcharacter();
	cout << endl;
	p2.printcharacter();

	return 0;
}