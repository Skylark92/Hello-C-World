#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

// 아스키 코드표를 구구단처럼 여러 열로 출력하라.
// 인쇄 가능한 32~126까지의 문자 95개, 한 열에 19개씩 5열로 출력
// 각 문자에 대해 10진, 16진 코드와 문자를 출력하고
// 프로그램 마지막에 getch 호출을 넣어 코드를 확인할 때까지 대기

int main()
{
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 19; j++) {
            int c = (i * 19) + j + 32;
            printf("[%c, %d, %x]", c, c, c);
            printf("   ");
        }
        printf("\n");
    }

    getch();
    return 0;
}
