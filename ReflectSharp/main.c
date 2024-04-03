#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>
#include <conio.h>

int main()
{
    int i;
    int x = 0, y = 0;
    char brick = '@';

    int dx = 1;
    int dy = 1;

    while (1) {
        if (kbhit()) {
            break;
        }

        // 화면 초기화
        clrscr();

        // 벽 그리기
        // 우측 세로벽
        for (i = 0; i <20; i++) {
            gotoxy(40, i);
            printf("%c", brick);
        }

        // 하측 가로벽
        gotoxy(0, 20);
        for (i = 0; i < 40; i++) {
            printf("%c", brick);
        }

        // 커서 원점
        gotoxy(x, y);
        printf("#");

        x += dx;
        y += dy;

        // 방향 전환
        if (x > (40 - 2)) {
            dx = -1;
        }
        else if (x < 1) {
            dx = 1;
        }
        if (y > (20 - 2)) {
            dy = -1;
        }
        else if (y < 1) {
            dy = 1;
        }
        delay(300);
    }

    return 0;
}
