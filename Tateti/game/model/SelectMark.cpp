#include "SelectMark.h"

void selectMark(Player& player, char playerSelection, Player& npc, char npcSelection) {
    player.mark = playerSelection;
    npc.mark = npcSelection;
}