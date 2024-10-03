#include <iostream>



//It will work for player and npc rival
struct Player {
    char mark = ' ';
    int pointers = 0;
};

void selectMarkView(Player& player, Player& npc);
void selectMark(Player& player, char playerSelection, Player& npc, char npcSelection);

//vista
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


//logica
void selectMark(Player& player, char playerSelection, Player& npc, char npcSelection) {
    player.mark = playerSelection;
    npc.mark = npcSelection;
}


int main()
{
    Player player;
    Player npc;

    selectMarkView(player, npc);

    std::cout << "El player tiene la marca: " << player.mark << std::endl;
    std::cout << "El npc tiene la marca: " << npc.mark << std::endl;

   
}
