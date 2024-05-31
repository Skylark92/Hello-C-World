#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

int main()
{
    short arPt[100][2];
    int i;

    clrscr();

    for (i = 0; i <100; i++) {
        arPt[i][0] = random(80);
        arPt[i][1] = random(25);
        gotoxy(arPt[i][0], arPt[i][1]);
        putch('*');
        delay(20);
    }

    delay(2000);
    for (i = 0; i < 100; i++) {
        gotoxy(arPt[i][0], arPt[i][1]);
        putch(' ');
        delay(20);
    }

    return 0;
}
