#include "deck.h"

deck::deck(){

	size = 52;
	carta card;
	string num, palo = "Diamante", color = "Rojo";

	for (int j = 0; j < 4; j++){
		if(j == 1){
			palo = "Corazon";
		}else if(j == 2){
			palo = "Trebol";
			color = "Negro";
		}else if(j == 3){
			palo = "Espada";
		}
		card.setCarta(palo,color,"A");
		mazo.push_back(card);
		for(int i = 2; i < 11; i++){
			num = to_string(i);
			card.setCarta(palo,color,num);
			mazo.push_back(card);
		}
		card.setCarta(palo,color,"J");
		mazo.push_back(card);
		card.setCarta(palo,color,"Q");
		mazo.push_back(card);
		card.setCarta(palo,color,"K");
		mazo.push_back(card);
	}
}

void deck::list(){
	for(int i = 0; i < size; i++){
		cout << mazo[i].toString() << endl;
		if(i == 12 || i == 25 || i == 38){
			cout << "-----------Nuevo Palo!!-----------" << endl;
		}
	}
}

deck deck::CrearMazo(){
	deck obj;
	return obj;
}
