#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void InputName(char **pName)
{
    *pName = (char *)malloc(12);
    strcpy(*pName, "Shine");
}

int main()
{
    char *Name;

    InputName(&Name);
    printf("�̸��� %s�Դϴ�.\n", Name);
    free(Name);

    return 0;
}
