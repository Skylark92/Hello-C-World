#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum;
    i = 1;
    sum = 0;

    here:
            sum = sum + i;
            if (i < 100) {
                i = i + 1;
                goto here;
            }

            printf("1에서 100까지의 합 = %d\n", sum);

    return 0;
}
