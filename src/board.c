#include "board.h"
#include "piece.h"
#include <stdint.h>
#include <wchar.h>

/**
 * @brief
 *
 * @param board
 */
void initBoard(Board board) {
  // Place Rooks
  board[0][0] = newPiece(ROOK, (Position){0,0});
  board[0][7] = newPiece(ROOK, (Position){0,0});
  board[7][0] = newPiece(ROOK, (Position){0,0});
  board[7][7] = newPiece(ROOK, (Position){0,0});
  // Place Knights
  board[0][1] = newPiece(KNIGHT, (Position){0,0});
  board[0][6] = newPiece(KNIGHT, (Position){0,0});
  board[7][1] = newPiece(KNIGHT, (Position){0,0});
  board[7][6] = newPiece(KNIGHT, (Position){0,0});
  // Place Bishops
  board[0][2] = newPiece(BISHOP, (Position){0,0});
  board[0][5] = newPiece(BISHOP, (Position){0,0});
  board[7][2] = newPiece(BISHOP, (Position){0,0});
  board[7][5] = newPiece(BISHOP, (Position){0,0});
  // Place King and Queen
  board[0][3] = newPiece(QUEEN, (Position){0,0});
  board[0][4] = newPiece(KING, (Position){0,0});
  board[7][3] = newPiece(QUEEN, (Position){0,0});
  board[7][4] = newPiece(KING, (Position){0,0});
  // Place Pawns
  for (int8_t i = 0; i < 8; ++i) {
    board[1][i] = newPiece(PAWN, (Position){1,i});
  }
  for (int8_t i = 0; i < 8; ++i) {
    board[6][i] = newPiece(PAWN, (Position){6,i});
  }
}

static const wchar_t *letters = L"    A   B   C   D   E   F   G   H  ";
static const wchar_t *boardTop = L"  ┏━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┓";
static const wchar_t *boardMiddle = L"  ┣━━━╋━━━╋━━━╋━━━╋━━━╋━━━╋━━━╋━━━┫";
static const wchar_t *boardBottom = L"  ┗━━━┻━━━┻━━━┻━━━┻━━━┻━━━┻━━━┻━━━┛";

void drawBoard(Board board) {
  wprintf(L"%ls\n", letters);
  wprintf(L"%ls\n", boardTop);
  for (int8_t i = 0; i < 8; ++i) {
    drawRow(board, i);
    if (i != 7) wprintf(L"%ls\n", boardMiddle);
  }
  wprintf(L"%ls\n", boardBottom);
  wprintf(L"%ls\n", letters);
}

void drawRow(Board board, int8_t row) {
    wprintf(L"%i ", 8 - row);
    for (int8_t j = 0; j < 8; ++j) {
      wprintf(L"┃ %lc ", board[row][j] != 0 ? board[row][j]->sprite : L' ');
    }
    wprintf(L"┃ %i\n", 8 - row);
}
