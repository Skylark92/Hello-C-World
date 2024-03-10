#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("정수를 입력하세요 :");
    scanf("%d", &i);
    if (i == 7)
        printf("7을 입력했습니다.\n");
        printf("행운의 7입니다.\n"); // 조건문을 벗어남

    if (i == 3) {
        printf("3을 입력했습니다.\n");
        printf("행운의 3입니다.\n");
    }

    return 0;
}
