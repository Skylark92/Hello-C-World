#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1234;
    void *vp;

    vp = &i;
    printf("%d\n", *(int *)vp);

    return 0;
}
