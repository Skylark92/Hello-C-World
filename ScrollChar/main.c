#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

int main()
{
    int i, j = 0;
    int size = 50;

    while (1) {
        for (i = 0; i < size; i++) {
            gotoxy(i, 10);
            if (i % 7 == j) {
                puts("O");
            } else {
                puts(".");
            }
        }
        if (j == 6) {
            j = 0;
        } else {
            j++;
        }
        delay(200);

        if (kbhit()) {
            break;
        }
    }

    return 0;
}
