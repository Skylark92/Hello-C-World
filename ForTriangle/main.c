#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    for (i = 1; i <= 15; i ++) {
        for (j = 0; j < i; j++) {
            printf("%c", i+'0');
        }
        printf("\n");
    }

    return 0;
}
