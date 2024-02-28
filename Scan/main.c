#include <stdio.h>
#include <stdlib.h>

int main()
{
    scanTogether();
    return 0;
}

void sum()
{
    int a, b;
    int sum;

    printf("첫 번째 숫자를 입력하세요 : ");
    scanf("%d", &a);
    printf("두 번째 숫자를 입력하세요 : ");
    scanf("%d", &b);
    sum = a + b;
    printf("입력한 두 수의 합은 %d입니다.\n", sum);
}

void scanTogether()
{
    int a, b;
    int sum;

    printf("두 개의 숫자를 입력하세요 : ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("입력한 두 수의 합은 %d입니다.\n", sum);
}
