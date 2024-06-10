#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>
#include <math.h>

int main()
{
    double angle;
    int x = -1, y = -1;
    static int arx[] = { 20, 19, 18, 17, 15, 12, 9, 6, 3, 0, -3, -6,
                                    -10, -12, -15, -17, -18, -19, -19, -19, -18, -17, -15, -12,
                                    -9, -6, -3, 0, 3, 6, 10, 12, 15, 17, 18, 19 };
    static int ary[] = { 0, 1, 3, 5, 6, 7, 8, 9, 9, 9, 9, 9,
                                    8, 7, 6, 4, 3, 1, 0, -1, -3, -5, -6, -7,
                                    -8, -9, -9, -9, -9, -9, -8, -7, -6, -4, -3, -1 };

    clrscr();
    gotoxy(40, 12);
    putch('S');
    for (angle = 0;; angle += 10) {
        if (angle == 360) angle = 10;
        if (kbhit()) break;
        gotoxy(40 + x, 12 +y);
        putch(' ');
        x = arx[(int)angle/10];
        y = ary[(int)angle/10];
        gotoxy(40 + x, 12 + y);
        putch('E');
        delay(100);
    }

    return 0;
}
