#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *arps[] = { "�����", "��", "������ź", "����", "������" };
    int i;

    for (i = 0; i < 5; i++) {
        printf("%s\n", arps[i]);
    }

    return 0;
}
