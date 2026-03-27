#include "board.h"

static const wchar_t *letters = L"    A   B   C   D   E   F   G   H  ";
static const wchar_t *boardTop = L"  ┏━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┳━━━┓";
static const wchar_t *boardMiddle = L"  ┣━━━╋━━━╋━━━╋━━━╋━━━╋━━━╋━━━╋━━━┫";
static const wchar_t *boardBottom = L"  ┗━━━┻━━━┻━━━┻━━━┻━━━┻━━━┻━━━┻━━━┛";
static const wchar_t boxDrawVertical = L'┃';

void initBoard(Board board) {

}

void drawBoard(Board board) {
  wprintf(L"%ls\n", letters);
  wprintf(L"%ls\n", boardTop);
  wprintf(L"%ls\n", boardMiddle);
  wprintf(L"%ls\n", boardBottom);
  wprintf(L"%ls\n", letters);
}

void drawRow(Board board, int8_t row) {}
