#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum;

    for (i = 0; i < 10; i = i + 1) {
        printf("���� = %d\n", i);
    }

    sum = 0;
    for (i = 0; i <= 100; i = i + 1) {
        sum = sum + i;
    }

    printf("1~100������ �� = %d\n", sum);

    int a;

    printf("���� �Է� :");
    scanf("%d", &a);

    sum = 0;
    for (i = 0; i <= a; i++) {
        sum += i;
    }

    printf("1���� �Է��� �� a���� : %d", sum);
    return 0;
}
