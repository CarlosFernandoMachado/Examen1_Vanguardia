myapp:			main.o deck.o carta.o slavefactory.o slave.o weapon.o flashbangbuilder.o weaponbuilder.o weaponsmith.o persona.o
		g++  main.o deck.o carta.o slavefactory.o slave.o weapon.o flashbangbuilder.o weaponbuilder.o weaponsmith.o persona.o -o myapp
	
main.o:			main.cpp
			g++ -c main.cpp

deck.o:			deck.cpp deck.h
			g++ -c deck.cpp

carta.o:		carta.cpp carta.h
			g++ -c carta.cpp

slavefactory.o:		slavefactory.cpp slavefactory.h
			g++ -c slavefactory.cpp

slave.o:		slave.cpp slave.h
			g++ -c slave.cpp

weapon.o:		weapon.cpp weapon.h
			g++ -c weapon.cpp

flashbangbuilder.o:	flashbangbuilder.cpp flashbangbuilder.h
			g++ -c flashbangbuilder.cpp

weaponbuilder.o: 	weaponbuilder.cpp weaponbuilder.h
			g++ -c weaponbuilder.cpp

weaponsmith.o:		weaponsmith.cpp weaponsmith.h
			g++ -c weaponsmith.cpp

persona.o:		persona.cpp persona.h
			g++ -c persona.cpp


