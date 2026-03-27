#include "piece.h"
#include <stdlib.h>
#include <wchar.h>

Piece* newPiece(Type type, Position position) {
  Piece* temp = malloc(sizeof(Piece));
  temp->type = type;
  temp->position = position;
  temp->sprite = getSprite(type);

  return temp;
}

wchar_t getSprite(Type type) {
  switch (type){
    case PAWN:
      return L'';
      break;
    case BISHOP:
      return L'';
      break;
    case KNIGHT:
      return L'';
      break;
    case ROOK:
      return L'';
      break;
    case QUEEN:
      return L'';
      break;
    case KING:
      return L'';
      break;
    default:
      return L'?';
      break;
  }
}
