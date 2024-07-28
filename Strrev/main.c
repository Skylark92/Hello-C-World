#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "Made In Korea";
    char str2[16];

    strcpy(str2, str);
    strupr(str2);
    printf("strupr => %s\n", str2);

    strcpy(str2, str);
    strlwr(str2);
    printf("strlwr => %s\n", str2);

    strcpy(str2, str);
    strrev(str2);
    printf("strrev => %s\n", str2);

    strcpy(str2, str);
    strset(str2, '*');
    printf("strset => %s\n", str2);
    return 0;
}
