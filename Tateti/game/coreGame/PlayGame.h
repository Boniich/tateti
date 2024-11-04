#pragma once
#include "../view/SelectMarkView.h"
#include "../view/ShowTableGameView.h"
#include "../view/ShowOptionToSetPlayerMarkView.h"
#include "../view/SetNpcMarkView.h"
#include "../view/DeterminateWinnerView.h"
#include "../model/Player.h"
#include "../model/CleanTableGame.h"

void playGame(char tableGame[3][3], Player& player, Player& npc);