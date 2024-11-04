#include "StartGame.h"

void startGame() {
    SetConsoleOutputCP(CP_UTF8);


    Player player;
    Player npc;

    char tableGame[3][3] = { {' ',' ',' '}
                            ,{' ',' ',' '}
                            ,{' ',' ',' '} };

    selectMarkView(player, npc);

    std::cout << "El player tiene la marca: " << player.mark << std::endl;
    std::cout << "El npc tiene la marca: " << npc.mark << std::endl;

    menu(tableGame, player, npc);
}