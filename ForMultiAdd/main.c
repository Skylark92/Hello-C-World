#include <stdio.h>
#include <stdlib.h>

// (1) + (1 * 2) + (1 * 2 * 3) + (1 * 2 * 3 * 4) + ...

int main()
{
    int i, j, k = 5, l, result = 0;

    for (i = 1; i < k; i++) {
            l = 1;
        for (j = 1; j <= i; j++) {
            l *= j;
        }
        result += l;
    }

    printf("%d", result);

    return 0;
}
