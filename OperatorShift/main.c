#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("정수를 입력하세요 : ");
    scanf("%d", &i);
    printf("결과 = %d\n", i << 1);

    return 0;
}
