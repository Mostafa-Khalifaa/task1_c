#include "draw.h"
#include "screen.h"
#include <stdio.h>

int main() {

    clearScreen();

    showInitial("Hello");

    delaySeconds(2);

    showStatementScreen();
    getchar();

    clearScreen();
    return 0;
}
