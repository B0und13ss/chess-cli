#include "piece.h"
#include <stdlib.h>

Piece* newPiece(Type type) {
  Piece* temp = malloc(sizeof(Piece));
  temp->type = type;
  temp->sprite = getSprite(type);

  return temp;
}

char* getSprite(Type type) {
  switch (type){
    case PAWN:
      return "";
      break;
    case BISHOP:
      return "";
      break;
    case KNIGHT:
      return "";
      break;
    case ROOK:
      return "";
      break;
    case QUEEN:
      return "";
      break;
    case KING:
      return "";
      break;
  }
}
