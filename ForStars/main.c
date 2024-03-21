#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    for(i = 15; i > 0; i--) {
        for (j = 1; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 0; i < 15; i++) {
        for(j = 14; j > 0; j--) {
            if (i >= j) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    int k = 60;

    for (i = 0; i < (k / 2) + 1; i++) {
        for (j = 0; j < k; j++) {
            if (j > (k / 2) - i && j < (k / 2) + i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
