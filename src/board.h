#include <wchar.h>
#include <stdint.h>
#include "piece.h"

#pragma once

typedef Piece Board[8][8];

void initBoard(Board);
void drawBoard(Board);
void drawRow(Board, int8_t);
