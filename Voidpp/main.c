#include <stdio.h>
#include <stdlib.h>

int main()
{

    void *vp;
    void *av[5];
    void **vpp;
    int i, *pi = &i;

    vpp = &vp; // ����
    vpp = av; // ����
    vpp++; // ����
    *vpp; // ����
    // vpp = &pi; // �Ұ���
    // **vpp; // �Ұ���

    return 0;
}
