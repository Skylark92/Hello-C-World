#include <stdio.h>
#include <stdlib.h>

int Max(int a, int b)
{
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main()
{
    int a, b, m;

    printf("두 수를 입력하세요 :\n");
    scanf("%d%d", &a, &b);

    m = Max(a,b);

    printf("두 수 중 큰 값은 %d입니다.\n", m);

    return 0;
}
