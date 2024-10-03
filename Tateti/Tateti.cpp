#include <iostream>
#include "game/view/SelectMarkView.h"


int main()
{
    Player player;
    Player npc;

    selectMarkView(player, npc);

    std::cout << "El player tiene la marca: " << player.mark << std::endl;
    std::cout << "El npc tiene la marca: " << npc.mark << std::endl;
}
