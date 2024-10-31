#include "SetNpcMark.h"
#include "ShowOptionToSetPlayerMark.h"

char* setNpcMark(char tableGame[3][3], const char mark) {
	int amountSpaceFree = 0;
	static char positionToSetMark[3];
	char(*ptr)[2] = showOptionToSetPlayerMark(tableGame, amountSpaceFree);

	std::srand(std::time(0));

	int selection = 1 + std::rand() % amountSpaceFree;

	positionToSetMark[0] = ptr[selection - 1][0];
	positionToSetMark[1] = ptr[selection - 1][1];

	setPlayerMark(tableGame,positionToSetMark, mark);

	return positionToSetMark;

}