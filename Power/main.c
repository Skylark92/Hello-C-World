#include <stdio.h>
#include <stdlib.h>

int power(int a, int b);

int main()
{
    printf("2ÀÇ 3½Â : %d\n", power(2, 3));
    printf("2ÀÇ 10½Â : %d\n", power(2, 10));
    printf("3ÀÇ 4½Â : %d\n", power(3, 4));
    printf("11ÀÇ 2½Â : %d\n", power(11, 2));
    printf("5ÀÇ 5½Â : %d\n", power(5, 5));
    return 0;
}

int power(int a, int b)
{
    int i;
    int result = 1;

    for (i = 1; i <= b; i++) {
            result *= a;
    }

    return result;
}
