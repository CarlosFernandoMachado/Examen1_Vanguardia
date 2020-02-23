#include "carta.h"

carta::carta(){
	this->palo = "";
	this->color = "";
	this->numero = "";
}

carta::carta(string palo, string color, string numero){
	this->palo = palo;
	this->color = color;
	this->numero = numero;
}

void carta::setCarta(string palo, string color, string numero){
	this->palo = palo;
	this->color = color;
	this->numero = numero;
}

string carta::toString(){
	string TuCartaEs = "Palo: " + palo + ", Color: " + color + ", Numero: " + numero;
	return TuCartaEs;
}
