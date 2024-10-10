#include "SetPlayerMark.h"


struct Table {
	int index;
	char character;
};


void setPlayerMark(char tableGame[3][3], char* seleccion, const char mark) {

	Table letter[3] = { {0,'A'},{1,'B'},{2,'C'} };
	Table numbers[3] = { {0,'1'},{1,'2'},{2,'3'} };

	int rowSelected = 0;
	int columnSelected = 0;

	for (int i = 0; i < 3; i++) {
		if (seleccion[0] == letter[i].character) {
			rowSelected = letter[i].index;
		}
	}

	for (int i = 0; i < 3; i++) {
		if (seleccion[1] == numbers[i].character) {
			columnSelected = numbers[i].index;
		}
	}
	tableGame[rowSelected][columnSelected] = mark;

}
	

