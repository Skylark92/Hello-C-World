#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char si [] = "��õ";
    char ku[] = "��";
    char dong[] = "����";
    char juso[64];

    strcpy(juso, si);
    strcat(juso, "�� ");
    strcat(juso, ku);
    strcat(juso, "�� ");
    strcat(juso, dong);
    strcat(juso, "��");

    puts(juso);

    return 0;
}
