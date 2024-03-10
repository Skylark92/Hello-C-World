#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef int jungsoo;
    typedef enum { True, False } Bool;
    typedef int *pint;
    typedef int arint[10];
    typedef struct { int a; double b; } myst;

    jungsoo num = 1;

    Bool Love = True;

    jungsoo nums[3];

    for (int i = 0; i < 3; i++) {
            nums[i] = i;
    }

    for (int i = 0; i<3; i++) {
        printf("jungsoo of nums: %d\n", nums[i]);
    }

    printf("jungsoo: %d, Love: %d\n", num, Love);
    return 0;
}
