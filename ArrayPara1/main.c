#include <stdio.h>
#include <stdlib.h>

void OutArray(int ar[5])
{
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d¹øÂ° = %d\n", i, ar[i]);
    }
}

void main(void)
{
    int ar[] = { 1, 2, 3, 4, 5 };

    OutArray(ar);
}
