#include "persona.h"

persona::persona(string name, int age, int ide){
	nombre = name;
	edad = age;
	id = ide;
}

void persona::ToString(){
	cout << "Soy " + nombre + " tengo " + to_string(edad) + " años de edad, mi Identidad es: " + to_string(id) << endl;
}

string persona::GetNombre(){
	return nombre;
}

int persona::GetEdad(){
	return edad;
}

int persona::GetId(){
	return id;
}

void persona::NuevoAmigo(persona* amigo){
	cout << nombre + " ha añadido un nuevo amigo, " + amigo->GetNombre() + " -- Con identidad: " + to_string(amigo->GetId()) << endl;
	if(amigos.size() > 0){
		cout << "Los amigos de " + nombre + " comentaron:"<< endl;
		for(int i = 0; i < amigos.size(); i++){
			amigos[i]->Reaccion(amigo);
		}
	}
	amigos.push_back(amigo);
}

void persona::Reaccion(persona* person){
	bool common = false;
	for(int i = 0; i < amigos.size(); i++){
		if(*amigos[i] == *person){
			common = true;
		}
	}
	if(common){
		cout << nombre + "=> Dice: Tenemos un amigo en comun, " + person->GetNombre() + " -- Con identidad: " + to_string(person->GetId()) << endl;
	}else{
		cout << nombre + "=> Dice: No conozco a " + person->GetNombre() + " -- Con identidad: " + to_string(person->GetId()) << endl;
	}
	
}

bool persona::operator==(persona otro){
	if(otro.GetId() == id){
		return true;
	}
	return false;
}

void persona::MisAmigos(){
	cout << "Los amigos de " + nombre + " son:" << endl;
	for (int i = 0; i < amigos.size(); i++){
		amigos[i]->ToString();
	}
}
