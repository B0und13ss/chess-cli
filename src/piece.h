#include <stdint.h>

#pragma once

enum Type { PAWN, BISHOP, KNIGHT, ROOK, QUEEN, KING };
typedef enum Type Type;

typedef struct Position {
  int8_t x;
  int8_t y;
} Position;

typedef struct Piece {
  Type type;
  Position position;
} Piece;
