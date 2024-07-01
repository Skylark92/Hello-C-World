#include <stdio.h>
#include <stdlib.h>

void alloc(void **mem, size_t size)
{
    *mem = malloc(size);
}

int main()
{
    void *vp;

    alloc(&vp, sizeof(int));
    *(int *)vp = 1234;
    printf("%d\n", *(int *)vp);
    free(vp);

    return 0;
}
