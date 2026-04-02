#include "board.h"
#include "piece.h"
#include <stdint.h>
#include <stdio.h>

void initBoard(Board board) { board[0][0] = newPiece(PAWN); }

static const char *reset = "\033[0m";
static const char *mcNextSegment = "\033[B\033[7D";
static const char *mcNextSquare = "\033[2A";
static const char *mcNextRow = "\033[1E";

// static const wchar_t *letters = L"%ls    A   B   C   D   E   F   G   H
// %ls\n";

// \033[6D\033[1B

void drawBoard(Board board) {
  drawSquare(board[0][0], white);
  // drawSquare(board[0][1], black);
}

void drawSquare(Piece *piece, Color color) {
  const char *background = color == white ? "\033[48;5;255m" : "\033[48;5;232m";
  const char *foreground = color == white ? "\033[38;5;232m" : "\033[38;5;255m";
  const char *sprite = piece == 0 ? " " : piece->sprite;
  printf("%s%s       %s   %s   %s        %s%s", background, foreground,
         mcNextSegment, sprite, mcNextSegment, mcNextSquare, reset);
}
