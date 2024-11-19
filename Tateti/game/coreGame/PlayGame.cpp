#include "PlayGame.h"

void playGame(char tableGame[3][3],Player& player, Player& npc) {

    bool gameOver = false;
    bool isThereWinner = false;

    do {
        showTableGameView(tableGame);

        ShowOptionToSetPlayerMarkView(tableGame);

        setPlayerMarkView(tableGame, player.mark);

        showTableGameView(tableGame);

        if (determinatePlayerWin(tableGame, player)) {
            showWinner(gameOver, isThereWinner, "El jugador es el ganador");
            player.pointers++;
        }
        else {

            if (!determinateDraw(tableGame, gameOver, isThereWinner)) {
                setNpcMarkView(tableGame, npc.mark);

                if (determinateNPCWin(tableGame, npc)) {
                    showTableGameView(tableGame);
                    showWinner(gameOver, isThereWinner, "El NPC es el ganador");
                    npc.pointers++;
                }
            }


        }

    } while (!gameOver);

    cleanTableGame(tableGame);

}

