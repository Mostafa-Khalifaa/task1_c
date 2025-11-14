#include <stdio.h>
#include <stdlib.h>
#include "draw.h"
#include "screen.h"

int main()
{
    clearScreen();
    showInitial(10, 8, "Hello World!", RED);
    delaySeconds(2);

    showStatementScreen();
    getchar();

    clearScreen();
    return 0;
}
