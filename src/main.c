#include "board.h"
#include <fcntl.h>
#include <io.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <windows.h>

// ! Learn DOXYGEN and comment YOUR FUNCTIONS


int main(void) {
  // TODO: Make this dynamic to OS for compiling
  // This is some windows garbage to allow us to print unicode to the terminal
  _setmode(_fileno(stdout), _O_U16TEXT);

  // wprintf(L"Hello, from chess! %lc\n", L'\ue261');

  Board board = {0};
  initBoard(board);

  drawBoard(board);
  return EXIT_SUCCESS;
}
