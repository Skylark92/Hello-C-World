#include <stdio.h>
#include <stdlib.h>

int Add(ttt, ddd)
int ttt;
int ddd;
{
    return ttt +ddd;
}

int main()
{
    int a, b;
    a = 3;
    b = 4;

    printf("3 + 4 = %d\n", Add(a,b));
    printf("5 + 6 = %d\n", Add(5, 6));
    return 0;
}
