#include <iostream>
#include <windows.h>
#include "game/view/SelectMarkView.h"
#include "game/view/PlayGame.h"





int main()
{

    SetConsoleOutputCP(CP_UTF8);


    bool endGame = false;
    int opcion;
    Player player;
    Player npc;
    char tableGame[3][3] = { {' ',' ',' '}
                            ,{' ',' ',' '}
                            ,{' ',' ',' '} };

    selectMarkView(player, npc);

    std::cout << "El player tiene la marca: " << player.mark << std::endl;
    std::cout << "El npc tiene la marca: " << npc.mark << std::endl;

    do
    {

        std::cout << "--- Menu --- " << std::endl;
        std::cout << "1- Jugar" << std::endl;
        std::cout << "2- Puntos" << std::endl;
        std::cout << "3- Salir" << std::endl;
        std::cin >> opcion;


        switch (opcion)
        {
        case 1: 
            playGame(tableGame, player, npc);
            break;
        case 2:
            break;
        case 3:
            std::cout << "Adios! hasta la proxima!" << std::endl;
            endGame = true;
            break;
        default:
                std::cout << "La opcion no es valida. Vuelve a intentarlo" << std::endl;
            break;
        }


    } while (!endGame);
}
