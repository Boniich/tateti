#include "ShowOptionToSetPlayerMarkView.h"


void setPlayerMarkView(char tableGame[3][3],const char mark) {
	
	int seleccion;
	bool exit = false;
	int amountSpaceFree = 0;
	char(*ptr)[2] = showOptionToSetPlayerMark(tableGame, amountSpaceFree);
	static char positionToSetMark[2];

	do {


		std::cout << "Seleciona una opcion: ";

		if (std::cin >> seleccion) {

			if (seleccion >= 1 && seleccion <= amountSpaceFree) {
				std::cout << "La opcion selecciona es: " << ptr[seleccion - 1][0] << ptr[seleccion - 1][1];
				positionToSetMark[0] = ptr[seleccion - 1][0];
				positionToSetMark[1] = ptr[seleccion - 1][1];
				exit = true;
			}
			else {
				std::cout << "---------------------------------------" << std::endl;
				std::cout << "La opcion ingresada no es valida" << std::endl;
				std::cout << "---------------------------------------" << std::endl;
			}

		}
		else {
			std::cout << "---------------------------------------" << std::endl;
			std::cout << "Error: se ingreso un caracter no valido" << std::endl;
			std::cout << "---------------------------------------" << std::endl;
			std::cin.clear();
			std::cin.ignore();
		}

	} while (!exit);


	setPlayerMark(tableGame, positionToSetMark, mark);
	
}


void ShowOptionToSetPlayerMarkView(char tableGame[3][3]) {

	int amountSpaceFree = 0;
	char(*ptr)[2] = showOptionToSetPlayerMark(tableGame, amountSpaceFree);

	std::cout << " ---- Lugares para poner tu marca ----"<<std::endl;
	for (int i = 0; i < amountSpaceFree; i++) {
		std::cout << (i + 1)<< "- ";
		for (int e = 0; e < 2; e++) {
			std::cout << ptr[i][e];
		}
		std::cout << "" << std::endl;
	}

	std::cout << "" << std::endl;
}