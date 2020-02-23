#include "weapon.h"


weapon::weapon(){
	
}

void weapon::SayHello(){
	string banned,lethal;
	if(BannedGeneva){
		banned = "Yes";
	}else{
		banned = "No";
	}
	if(Lethal){
		lethal = "Yes";
	}else{
		lethal = "No";
	}
	cout << "Hello! I'm a Weapon\nMy name is: " + Name + "\nI'm an " + Function + "\nAm i banned by the Geneva Convention? " + banned + "\nAm i lethal? " + lethal << endl;

}
