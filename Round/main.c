#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define banolim(x, dig) (floor((x) * pow(10, dig) + 0.5) / pow(10, dig))

int main()
{
    double x = 123.456789;
    int i;

    for (i = -2; i < 5; i++) {
        printf("%f의 %d자리 반올림 = %f \n", x, i, banolim(x, i));
    }

    return 0;
}
