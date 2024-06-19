#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ar[] = { 1, 2, 3, 4, 5 };
    void *vp;

    vp = ar;
    vp = (int *)vp +1;
    printf("%d\n", *(int *)vp);
    return 0;
}
