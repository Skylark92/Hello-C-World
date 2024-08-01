#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

int main()
{
    char *endptr;
    char str[] = "abcd";

    long l = strtol(str, &endptr, 16);
    printf("%ld\n", l);
    printf("x = %x\n", l);
    return 0;
}
