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

        if (std::cin >> opcion) {

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
                std::cout << "---------------------------------------" << std::endl;
                std::cout << "La opcion ingresada no es valida" << std::endl;
                std::cout << "---------------------------------------" << std::endl;
                break;
            }


        }
        else {
            system("cls");
            std::cout << "---------------------------------------" << std::endl;
            std::cout << "Error: se ingreso un caracter no valido" << std::endl;
            std::cout << "---------------------------------------" << std::endl;
            std::cin.clear();
            std::cin.ignore();
        }

    } while (opcion != 1 && opcion != 2);

}