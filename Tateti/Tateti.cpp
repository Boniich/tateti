#include <iostream>
#include <windows.h>
#include "game/view/SelectMarkView.h"
#include "game/view/ShowTableGameView.h"


int main()
{

    SetConsoleOutputCP(CP_UTF8);



    Player player;
    Player npc;
    char tableGame[3][3] = { {'X','O','X'}
                            ,{'O','O','X'}
                            ,{'O','X','O'} };

    selectMarkView(player, npc);

    std::cout << "El player tiene la marca: " << player.mark << std::endl;
    std::cout << "El npc tiene la marca: " << npc.mark << std::endl;

    showTableGameView(tableGame, 3, 3);
}
