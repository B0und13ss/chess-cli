#include <stdint.h>
#include <wchar.h>

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
  wchar_t sprite;
} Piece;

Piece* newPiece(Type, Position);

wchar_t getSprite(Type);
