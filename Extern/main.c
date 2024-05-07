#include <stdio.h>
#include <stdlib.h>

int before = 11;

int main()
{
    extern int before;
    extern int after;
    auto int inner = 33;

    printf("before  = %d, after = %d, inner = %d\n", before, after, inner);
    return 0;
}

int after = 22;
