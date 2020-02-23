#include "flashbangbuilder.h"

flashbangbuilder::flashbangbuilder(){

}

void flashbangbuilder::BuildIsBanned(bool val){
	arma.BannedGeneva = val;
}

void flashbangbuilder::BuildIsLethal(bool val){
	arma.Lethal = val;
}

void flashbangbuilder::BuildNameIt(string val){
	arma.Name = val;
}

void flashbangbuilder::BuildWhatItDo(string val){
	arma.Function = val;
}

weapon flashbangbuilder::GetWeapon(){
	return arma;
}


