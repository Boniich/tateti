#include "Menu.h"


void menu(char tableGame[3][3], Player player, Player npc) {
    bool endGame = false;
    int opcion;
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
            system("cls");
            playGame(tableGame, player, npc);
            break;
        case 2:
            system("cls");
            showPointers(player, npc);
            std::cout << "" << std::endl;
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