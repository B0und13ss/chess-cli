#include "piece.h"
#include <stdint.h>

#pragma once

typedef enum Color { black, white } Color;

typedef Piece *Board[8][8];

void initBoard(Board);
void drawBoard(Board);
void drawSquare(Piece *piece, Color color);
