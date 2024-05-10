#include <stdio.h>
#include <stdlib.h>

#define doSomething()

int main()
{
    // register int i;
    int i;

    for (i = 0; i < 1000000000; i++) {
            doSomething();
    }

    printf("속도의 차이를 느껴보시오.\n");
    return 0;
}
