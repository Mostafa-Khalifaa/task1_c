#include "draw.h"
#include "cursor.h"
#include "screen.h"
#include <stdio.h>

void drawText(int x, int y, const char *text, Color color) {
    moveCursor(x, y);
    setColor(color);
    printf("%s", text);
    resetColor();
    fflush(stdout);
}

void showInitialStyled(const char *text, InitialStyle style) {
    drawText(style.x, style.y, text, style.color);
}

void showInitial(const char *text) {
    InitialStyle defaultStyle = { .x = 6, .y = 8, .color = BLUE };
    showInitialStyled(text, defaultStyle);
}

void showStatementScreen(void) {
    clearScreen();
    drawText(5, 2, "=== Statement Screen ===", CYAN);
    drawText(5, 4, "Operation completed successfully!", GREEN);
    drawText(5, 6, "Press Enter to continue...", YELLOW);
}
