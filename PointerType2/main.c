#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ar[] = { 1, 2, 3, 4, 5 };
    int *pi;

    pi = ar;
    printf("첫 번째 요소 = %d\n", *pi);
    pi++;
    printf("두 번째 요소 = %d\n", *pi);
    return 0;
}
