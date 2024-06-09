#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>
#include <math.h>

int main()
{
    double angle;
    int x = -1, y = -1;

    clrscr();
    gotoxy(40, 12);
    putch('S');
    for (angle = 0;; angle += 10) {
        if (angle == 360) angle = 10;
        if (kbhit()) break;
        gotoxy(40 + x, 12 +y);
        putch(' ');
        x = (int)(cos(angle * 3.1416/ 180) * 20);
        y = (int)(sin(angle * 3.1416 / 180) * 10);
        gotoxy(40 + x, 12 + y);
        putch('E');
        delay(100);
    }

    return 0;
}
