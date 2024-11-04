#pragma once
#include <iostream>
#include "../model/DeterminateWinner.h"
#include "ShowTableGameView.h"
#include "../model/Player.h"

bool determinatePlayerWin(char tablaGame[3][3], Player player);
bool determinateNPCWin(char tablaGame[3][3], Player npc);
bool determinateDraw(char tablaGame[3][3], bool& gameOver, bool& isThereWinner);
void showWinner(bool& gameOver, bool& isThereWinner, const char* labelWinner);