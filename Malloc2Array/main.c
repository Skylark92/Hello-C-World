#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char (*p)[4] = (char (*)[4])malloc(3 * 4 * sizeof(char));

    strcpy(p[0], "dog");
    strcpy(p[1], "cow");
    strcpy(p[2], "cat");

    for (i = 0; i < 3; i++) {
        puts(p[i]);
    }

    free(p);

    return 0;
}
