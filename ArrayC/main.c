#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

int main()
{
    int i;
    int arPos[40][2] = {
          {48,6},{47,5},{46,4},{45,4},{44,3},{43,3},{42,3},
          {41,3},{40,3},{40,3},{39,4},{38,4},{37,5},{36,6},
          {36,7},{35,8},{35,9},{35,10},{34,11},{34,12},
          {34,13},{34,14},{35,15},{35,16},{35,17},{36,18},
          {37,19},{38,20},{39,20},{40,21},{41,21},{42,21},
          {42,21},{43,21},{44,20},{45,20},{46,20},{47,19},
          {48,18},{49,17}
    };

    clrscr();
    for (i = 0; i < sizeof(arPos) / sizeof(arPos[0]); i++) {
        gotoxy(arPos[i][0], arPos[i][1]);
        putch('C');
    }

    gotoxy(0, 25);
    return 0;
}