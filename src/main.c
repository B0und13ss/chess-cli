#include "board.h"
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#if defined(_WIN32) || defined(_WIN64)
#include <fcntl.h>
#include <io.h>
#include <windows.h>
#elif defined(__APPLE__) || defined(__linux__)
#include <locale.h>
#include <wchar.h>
#endif

// ! Learn DOXYGEN and comment YOUR FUNCTIONS

int main(void) {
#if defined(_WIN32) || defined(_WIN64)
  // This is some windows garbage to allow us to print unicode to the terminal
  _setmode(_fileno(stdout), _O_U16TEXT);
#elif defined(__APPLE__) || defined(__linux__)
  // Set the C locale so wide-character functions know we're using UTF-8
  setlocale(LC_ALL, "");
#endif
  // wprintf(L"Hello, from chess! %lc\n", L'\ue261');

  Board board = {0};
  initBoard(board);

  drawBoard(board);
  return EXIT_SUCCESS;
}
