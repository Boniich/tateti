#include "CleanTableGame.h"

void cleanTableGame(char tableGame[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			tableGame[i][j] = ' ';
		}
	}
}