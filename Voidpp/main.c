#include <stdio.h>
#include <stdlib.h>

int main()
{

    void *vp;
    void *av[5];
    void **vpp;
    int i, *pi = &i;

    vpp = &vp; // 가능
    vpp = av; // 가능
    vpp++; // 가능
    *vpp; // 가능
    // vpp = &pi; // 불가능
    // **vpp; // 불가능

    return 0;
}
