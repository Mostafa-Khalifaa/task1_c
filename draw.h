#ifndef DRAW_H
#define DRAW_H

#include "color.h"

typedef struct {
    int x;
    int y;
    Color color;
} InitialStyle;

void drawText(int x, int y, const char *text, Color color);

void showInitialStyled(const char *text, InitialStyle style);

void showInitial(const char *text);

void showStatementScreen(void);

#endif // DRAW_H
