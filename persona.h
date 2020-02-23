#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class persona{

	public:
	persona(string, int, int);
	string nombre;
	int edad,id;
	vector <persona*> amigos;
	void ToString();
	string GetNombre();
	int GetEdad();
	int GetId();
	void NuevoAmigo(persona*);
	void Reaccion(persona*);
	bool operator==(persona);
	void MisAmigos();

};
