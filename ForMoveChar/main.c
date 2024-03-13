#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

int main()
{
    int i;
    clrscr();

    for (i = 1; i <= 80; i++) {
     gotoxy(i, 10);
     putch('#');
     gotoxy(i - 1, 10);
     putch(' ');
     delay(100);
    }
    return 0;
}
