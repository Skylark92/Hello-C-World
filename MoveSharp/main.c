#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

void main()

{

     int x,y;

     int ch;

     x=40;
     y=10;

     clrscr();

     for(;;) {

          gotoxy(x,y);

          putch('#');

          ch=getch();

          if (ch == 0xE0 || ch == 0) {

              ch=getch();

              switch (ch) {

              case 75:

                   x=x-1;

                   break;

              case 77:

                   x=x+1;

                   break;

              case 72:

                   y=y-1;

                   break;

              case 80:

                   y=y+1;

                   break;

              }

          } else {

              switch (ch) {

              case ' ':

                   clrscr();

                   break;

              case 'q':

              case 'Q':

                    exit(0);

              }
          }
     }
}
