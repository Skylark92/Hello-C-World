#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

int main()
{
    int arRand[] = { 2, 9, 14, 19, 27 };
    int Num;

    randomize();
    Num = arRand[random(sizeof(arRand)/sizeof(arRand[0]))];
    printf("생성한 난수 = %d \n", Num);

    return 0;
}
