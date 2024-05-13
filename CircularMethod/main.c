#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int r;

    for (r = 0; r <= 90; r += 10) {
        printf("sin(%dµµ) = %f\n", r, sin(r * 3.1416 / 180));
    }

    return 0;
}
