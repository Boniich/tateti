#include "DeterminateWinner.h"

char getWinner(char tableGame[3][3]) {

    for (int i = 0; i < 3; i++) {
        //comprobamos si existe en filas
        if (tableGame[i][0] == tableGame[i][1] && tableGame[i][1] == tableGame[i][2] && tableGame[i][0] != ' ') {
            return tableGame[i][0];
        }

        if (tableGame[0][i] == tableGame[1][i] && tableGame[1][i] == tableGame[2][i] && tableGame[0][i] != ' ') {
            return tableGame[0][i];
        }
    }

    //Verificamos diagolanales

    if (tableGame[0][0] == tableGame[1][1] && tableGame[1][1] == tableGame[2][2] && tableGame[0][0] != ' ') {
        return tableGame[0][0];
    }

    if (tableGame[0][2] == tableGame[1][1] && tableGame[1][1] == tableGame[2][0] && tableGame[0][2] != ' ') {
        return tableGame[0][2];
    }

    return ' ';

}

int countFreeSpaces(char tableGame[3][3]) {

    int freeSpaces = 0;

    for (int i = 0; i < 3; i++) {
        for (int e = 0; e < 3; e++) {
            if (tableGame[i][e] == ' ') {
                freeSpaces++;
            }
        }
    }

    return freeSpaces;
}