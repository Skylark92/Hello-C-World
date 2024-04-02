#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

int main()
{
    int i, j = 0;
    char brick = '@';

    while (1) {
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
        gotoxy(j, j);
        printf("#");

        j++;
        delay(300);

        if (j == 19) break;
    }

    return 0;
}
