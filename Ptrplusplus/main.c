#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ar[] = { 10, 20, 30, 40, 50 };
    int i, *ptr;

    ptr = ar;
    for (i = 0; i < 5; i++) {
        printf("%d\n", *ptr++);
    }
    return 0;
}
