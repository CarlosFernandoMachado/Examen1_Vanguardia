#include <iostream>
#include <string.h>

using namespace std;

class carta{
	
	public:
	string palo,color,numero;
	carta();
	carta(string, string, string);
	void setCarta(string, string, string);
	string toString();

};
