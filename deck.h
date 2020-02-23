#include <iostream>
#include <string.h>
#include <vector>
#include "carta.h"


using namespace std;

class deck{
	
	private:
	vector<carta> mazo;
	int size;
	deck();

	public:
	static deck CrearMazo();
	void list();
};
