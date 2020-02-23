#include "slave.h"

slave::slave(){
	cout << "I'm mr meeseeks!! Look at me!!\nWhat do you want?" << endl;
	getline(cin,pedido);
}

void slave::done(){
	cout << "I've done " + pedido + "\nI die in peace now!!"<< endl ;
}
