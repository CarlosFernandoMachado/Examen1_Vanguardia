#include "weaponsmith.h"

weaponsmith::weaponsmith(weaponbuilder* builder){
	this->builder = builder;
}

void weaponsmith::Construct(string name,string function,bool ban,bool lethal){
	builder->BuildIsBanned(ban);
	builder->BuildIsLethal(lethal);
	builder->BuildNameIt(name);
	builder->BuildWhatItDo(function);
}

weapon weaponsmith::GetWeapon(){
	return builder->GetWeapon();
}
