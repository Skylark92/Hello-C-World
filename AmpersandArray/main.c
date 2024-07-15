#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ar[5] = { 1, 2, 3, 4, 5 };
    int *p1;
    int (*p2)[5];

    p1 = ar;
    p2 = &ar;

    printf("before = %p\n", p1);
    printf("before = %p\n", p2);

    p1++;
    p2++;
    printf("after = %p\n", p1);
    printf("after = %p\n", p2);
    return 0;
}
