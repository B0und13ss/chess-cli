#pragma once

enum Type { PAWN, BISHOP, KNIGHT, ROOK, QUEEN, KING };
typedef enum Type Type;

typedef struct Piece {
  Type type;
  char* sprite;
} Piece;

Piece* newPiece(Type);

char* getSprite(Type);
