#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("int = %d\n", sizeof(int));
    printf("double = %d\n", sizeof(double));
    printf("i = %d\n", sizeof(i));
    printf("string = %d\n", sizeof("string"));

    int price[100][3];
    printf("price = %d\n", sizeof(price));

    return 0;
}
