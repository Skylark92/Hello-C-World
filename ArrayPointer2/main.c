#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arps[5][9] = { "�����", "��", "������ź", "����", "������" };
    char (*ps)[9];

    ps = arps;
    int i;

    for (i = 0; i < 5; i++) {
        printf("%s\n", *ps++);
    }

    return 0;
}
