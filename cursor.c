#include "cursor.h"
#include "platform.h"
#include <stdio.h>

void moveCursor(int x, int y) {
#ifdef _WIN32
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { (SHORT)(x - 1), (SHORT)(y - 1) };
    SetConsoleCursorPosition(h, pos);
#else
    printf("\033[%d;%dH", y, x);
#endif
}
