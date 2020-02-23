#include <iostream>
#include <string.h>
#include "weaponbuilder.h"


using namespace std;

class flashbangbuilder : virtual public weaponbuilder{

	public:
	weapon arma;
	flashbangbuilder();
	void BuildIsBanned(bool);
	void BuildIsLethal(bool);
	void BuildNameIt(string);
	void BuildWhatItDo(string);
	weapon GetWeapon();
};
