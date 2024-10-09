#include "ShowOptionToSetPlayerMark.h"

	char(*showOptionToSetPlayerMark(char tableGame[3][3], int& amountSpaceFree))[2] {
		static char spacesFree[9][2];

		char letters[3] = { 'A','B','C' };
		char numbers[3] = { '1','2','3' };

		for (int i = 0; i < 3; i++) {
			for (int e = 0; e < 3; e++) {
				if (tableGame[i][e] == ' ') {
					spacesFree[amountSpaceFree][0] = letters[i];
					spacesFree[amountSpaceFree][1] = numbers[e];
					amountSpaceFree++;
				}
			}
		}

		return spacesFree;
	}


