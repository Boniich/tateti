#include "SetNpcMarkView.h"


void setNpcMarkView(char tableGame[3][3], const char mark) {

	char* selection = setNpcMark(tableGame, mark);
	std::cout << "El npc ha seleccionado el espacio: " << selection;
}