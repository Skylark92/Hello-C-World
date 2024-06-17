#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ar[] = { 10, 20, 30, 40, 50, 0 };
    int *ptr = ar;
    int sum = 0;

    while (*ptr) sum += *ptr++;
    printf("sum = %d\n", sum);
    return 0;
}
