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

    printf("�ӵ��� ���̸� �������ÿ�.\n");
    return 0;
}
