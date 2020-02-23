#include <iostream>
#include <string.h>
#include "weapon.h"


using namespace std;

class weaponbuilder{

	public:
	weaponbuilder();
	virtual void BuildIsBanned(bool)=0;
	virtual void BuildIsLethal(bool)=0;
	virtual void BuildNameIt(string)=0;
	virtual void BuildWhatItDo(string)=0;
	virtual weapon GetWeapon()=0;
};
