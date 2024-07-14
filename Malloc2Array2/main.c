#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n = 3, m = 4;
    int i;

    char **p;
    p = (char **)malloc(n * sizeof(char *));
    for (i = 0; i < n; i++) {
        p[i] = (char *)malloc(m * sizeof(char));
    }

    strcpy(p[0], "dog");
    strcpy(p[1], "cow");
    strcpy(p[2], "cat");

    for (i = 0; i <n; i++) {
        puts(p[i]);
    }

    for (i = 0; i < n; i++) {
        free(p[i]);
    }
    free(p);

    return 0;
}
