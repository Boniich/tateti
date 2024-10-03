#include "SelectMarkView.h"

void selectMarkView(Player& player, Player& npc) {
    int opcion;
    char playerSelection;
    char npcSelection;

    do
    {

        std::cout << "--- Marcas ---" << std::endl;
        std::cout << "1- X" << std::endl;
        std::cout << "2- O" << std::endl;
        std::cout << "Que marca deseas usar?" << std::endl;
        std::cin >> opcion;


        switch (opcion)
        {
        case 1:
            system("cls");
            playerSelection = 'X';
            npcSelection = 'O';
            selectMark(player, playerSelection, npc, npcSelection);

            break;
        case 2:
            system("cls");
            playerSelection = 'O';
            npcSelection = 'X';
            selectMark(player, playerSelection, npc, npcSelection);
            break;
        default:
            system("cls");
            std::cout << "La opcion ingresada no es valida" << std::endl;
            break;
        }

    } while (opcion != 1 && opcion != 2);

}