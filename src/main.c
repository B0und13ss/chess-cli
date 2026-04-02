#include "game.h"
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

/**
 * @brief These are the header files required for each major operating
 * system to print unicode to the terminal.
 *
 */
#if defined(_WIN32) || defined(_WIN64)
#include <windows.h>
#elif defined(__APPLE__) || defined(__linux__)
#include <unistd.h>
#endif

int main(void) {
  bool isRunning = true;

  initGame();
  while (isRunning) {
    updateGame();
    renderGame();
    sleep(50);
  }
  cleanGame();

  return EXIT_SUCCESS;
}
