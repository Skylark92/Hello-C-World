#include <stdio.h>
#include <stdlib.h>

int GetArSum(int ar[], int size)
{
    int i, sum = 0;

    for (i = 0; i < size; i++) {
        sum += ar[i];
    }
    return sum;
}

int main()
{
    int ar[] = { 1, 2, 3, 4, 5 };
    int ar2[] = { 6, 7, 8, 9, 10, 11 };

    printf("รัวี = %d\n", GetArSum(ar, sizeof(ar) / sizeof(ar[0])));
    printf("รัวี = %d\n", GetArSum(ar2, sizeof(ar2) / sizeof(ar2[0])));
    return 0;
}
