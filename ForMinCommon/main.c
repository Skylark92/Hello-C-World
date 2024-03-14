#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, Num1, Num2;

    printf("첫 번째 숫자를 입력하세요 : ");
    scanf("%d", &Num1);
    printf("두 번째 숫자를 입력하세요 : ");
    scanf("%d", &Num2);

    for (i = 1;;i++) {
        if (i % Num1 == 0 && i % Num2 == 0)
            break;
    }

    printf("최소 공배수 = %d\n", i);

    return 0;
}
