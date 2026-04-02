#include "game.h"
#include "board.h"
#include <stdio.h>

Board board = {0};

void initGame(void) {
  initBoard(board);
  printf("Hello, from chess! %s\n", "\ue261");
}

void updateGame(void) {

}

void renderGame(void) {
  printf("\033[H\033[0J");
  drawBoard(board);
}

void cleanGame(void) {
  printf("\033[H\033[0J");
}
