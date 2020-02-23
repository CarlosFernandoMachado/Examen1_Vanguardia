#include <iostream>
#include "flashbangbuilder.h"


using namespace std;

class weaponsmith{

	public:
	weaponbuilder* builder;
	void Construct(string,string,bool,bool);
	weapon GetWeapon();
	weaponsmith(weaponbuilder*);

};
