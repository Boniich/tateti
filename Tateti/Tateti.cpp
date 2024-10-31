#include <iostream>
#include <windows.h>
#include "game/view/SelectMarkView.h"
#include "game/view/ShowTableGameView.h"
#include "game/view/ShowOptionToSetPlayerMarkView.h"
#include "game/view/SetNpcMarkView.h"


int main()
{

    SetConsoleOutputCP(CP_UTF8);


    bool gameOver = false;
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

        setNpcMarkView(tableGame, npc.mark);

    } while (!gameOver);


    
}
