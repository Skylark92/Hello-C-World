#include <stdio.h>
#include <stdlib.h>

int power(int a, int b);

int main()
{
    printf("2�� 3�� : %d\n", power(2, 3));
    printf("2�� 10�� : %d\n", power(2, 10));
    printf("3�� 4�� : %d\n", power(3, 4));
    printf("11�� 2�� : %d\n", power(11, 2));
    printf("5�� 5�� : %d\n", power(5, 5));
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
