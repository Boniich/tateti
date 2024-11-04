#include <iostream>
#include <windows.h>
#include "game/view/SelectMarkView.h"
#include "game/view/ShowTableGameView.h"
#include "game/view/ShowOptionToSetPlayerMarkView.h"
#include "game/view/SetNpcMarkView.h"
#include "game/view/DeterminateWinnerView.h"





int main()
{

    SetConsoleOutputCP(CP_UTF8);


    bool gameOver = false;
    bool isThereWinner = false;
    Player player;
    Player npc;
    char tableGame[3][3] = { {' ',' ',' '}
                            ,{' ',' ',' '}
                            ,{' ',' ',' '} };

    selectMarkView(player, npc);

    std::cout << "El player tiene la marca: " << player.mark << std::endl;
    std::cout << "El npc tiene la marca: " << npc.mark << std::endl;

    do {
        showTableGameView(tableGame);

        ShowOptionToSetPlayerMarkView(tableGame);

        setPlayerMarkView(tableGame, player.mark);

        showTableGameView(tableGame);

        if (determinatePlayerWin(tableGame, player)) {
            showWinner(gameOver, isThereWinner, "El jugador es el ganador");
        }
        else {

            if(!determinateDraw(tableGame, gameOver, isThereWinner)) {
                setNpcMarkView(tableGame, npc.mark);
                showTableGameView(tableGame);

                if (determinateNPCWin(tableGame, npc)) {
                    showWinner(gameOver, isThereWinner, "El NPC es el ganador");
                }
            }
           

        }


        //char marca = getWinner(tableGame);

        //if (marca == player.mark) {
        //    //Si la marca devuelva es la del jugador, se termina el juego
        //    std::cout << "El ganador es el jugador " << std::endl;
        //    hayGanador = true;
        //    gameOver = true;
        //}
        //else {

        //    if (contarEspaciosEnBlanco(tableGame) != 0 && hayGanador == false) {

        //        setNpcMarkView(tableGame, npc.mark);

        //        char marca = getWinner(tableGame);

        //        if (marca == npc.mark) {
        //            showTableGameView(tableGame);
        //            std::cout << "El ganador es el NPC " << std::endl;
        //            hayGanador = true;
        //            gameOver = true;
        //        }
        //    }
        //    //Si la marca devuelva es la del npc, se termina el juego
        //}


        //if (contarEspaciosEnBlanco(tableGame) == 0 && hayGanador == false) {
        //    std::cout << "Es un empate" << std::endl;
        //    gameOver = true;
        //}



    } while (!gameOver);


    
}
