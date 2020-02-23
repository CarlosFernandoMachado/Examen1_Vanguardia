#include <iostream>
#include <string.h>
#include <vector>
#include <unistd.h>
#include "deck.h"
#include "slavefactory.h"
#include "weaponsmith.h"
#include "persona.h"

using namespace std;

int main(){

	cout << "Mi clase singleton es un mazo de cartas" << endl;
	//clases pertinentes a Singleton deck y carta
	deck mazo = deck::CrearMazo();
	mazo.list();
	cout << endl << endl;

	cout << "Mi clase factory es un creador de esclavos" << endl << endl;
	//clases pertinentes a Factory slave y slavefactory
	slavefactory master;
	vector<slave> misfits;
	int cant;
	cout << "¿Cuantos esclavos quiere crear?" << endl;
	cin >> cant;
	cin.ignore(1,'\n');
	for(int i = 0; i < cant; i++){
		misfits.push_back(master.CreateSlave());
		cout << endl;
	}
	for(int i = 0; i < cant; i++){
		misfits[i].done();
		cout << "Slave number " + to_string(i+1) + " has died" << endl << endl;
	}
	cout << endl << endl;

	cout << "Mi clase builder es flashbangbuilder" <<endl << endl;
	//clases pertinentes a Build: weaponbuilder, weapon, flashbangbuilder y weaponsmith
	string nombre, funcion, ban, lethal;
	bool geneva, letal;
	cout << "¿Como se llama su granada?" << endl;
	getline(cin,nombre);
	cout << "¿Que tipo de arma es su granada?" << endl;
	getline(cin,funcion);
	cout << "¿Su granada esta prohibida por la asosiacion de Ginebra? si/no" << endl;
	getline(cin,ban);
	if(strcmp(ban.c_str(),"si") == 0 ){
		geneva = true;
	}else{
		geneva = false;
	}
	cout << "¿Su granada es letal? si/no" << endl;
	getline(cin,lethal);
	if(strcmp(lethal.c_str(),"si") == 0 ){
		letal = true;
	}else{
		letal = false;
	}
	weaponbuilder* flash = new flashbangbuilder();
	weaponsmith smith(flash);
	smith.Construct(nombre,funcion,geneva,letal);
	weapon arma = smith.GetWeapon();
	arma.SayHello();
	cout << endl << endl; 

	cout << "Mi clase observer es persona" << endl;
	string waiter;
	//clases pertinentes persona
	persona ana("Ana",23,1), juan("Juan",22,2), pedro("Pedro",21,3), luis("Luis",20,4);
	ana.NuevoAmigo(&juan);
	juan.NuevoAmigo(&ana); //ana y juan son amigos
	cout << "--------------------------" << endl;
	ana.NuevoAmigo(&pedro);
	pedro.NuevoAmigo(&ana);//ana y pedro son amigos
	cout << "--------------------------" << endl;
	juan.NuevoAmigo(&luis);
	luis.NuevoAmigo(&juan);//luis y juan son amigos
	cout << "--------------------------" << endl;
	luis.NuevoAmigo(&ana);
	ana.NuevoAmigo(&luis);//ana y luis son amigos
	return 0;
}


