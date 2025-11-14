#include "color.h"
#include "platform.h"
#include <stdio.h>

void setColor(Color color) {
#ifdef _WIN32
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    WORD attr = 0;

    switch (color) {
        case BLACK:   attr = 0; break;
        case RED:     attr = FOREGROUND_RED; break;
        case GREEN:   attr = FOREGROUND_GREEN; break;
        case YELLOW:  attr = FOREGROUND_RED | FOREGROUND_GREEN; break;
        case BLUE:    attr = FOREGROUND_BLUE; break;
        case MAGENTA: attr = FOREGROUND_RED | FOREGROUND_BLUE; break;
        case CYAN:    attr = FOREGROUND_GREEN | FOREGROUND_BLUE; break;
        default:      attr = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE; break;
    }

    attr |= FOREGROUND_INTENSITY;
    SetConsoleTextAttribute(h, attr);
#else
    int code = 30 + color;
    printf("\033[%dm", code);
#endif
}

void resetColor(void) {
#ifdef _WIN32
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,
        FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
#else
    printf("\033[0m");
#endif
}
