#include "ShowOptionToSetPlayerMarkView.h"



void ShowOptionToSetPlayerMarkView(char tableGame[3][3]) {

	int amountSpaceFree = 0;
	char(*ptr)[2] = showOptionToSetPlayerMark(tableGame, amountSpaceFree);

	std::cout << "Lugares para poner tu marca: ";
	for (int i = 0; i < amountSpaceFree; i++) {
		for (int e = 0; e < 2; e++) {
			std::cout << ptr[i][e];
		}
		std::cout << " ; ";
	}

	std::cout << "" << std::endl;

	std::cout << "Selecciona una opcion: ";


}