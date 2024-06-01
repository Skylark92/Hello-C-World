#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

#define RANGE 100

int main()
{
    BOOL Prime[RANGE+1];
    int i, j;

    for (i = 0; i <= RANGE; i++) {
        Prime[i] = TRUE;
    }

    for (i = 2; i <= RANGE; i++) {
        if (Prime[i]) {
            for (j = i * 2; j <= RANGE; j += i) {
                Prime[j] = FALSE;
            }
        }
    }

    printf("1~%d까지의 소수 목록\n\n", RANGE);

    for (i = 2; i <= RANGE; i++) {
        if (Prime[i]) {
            printf("%d ", i);
        }
    }

    return 0;
}
