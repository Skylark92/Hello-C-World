#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    double r;

    printf("두 개의 정수를 입력하십시오(a b) : ");
    scanf("%d %d", &i, &j);

    r = (double)i/j;
    printf("%d와 %d의 비율은 %f입니다.\n", i, j, r);
    return 0;
}
