#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void InputName(char *pName)
{
    pName = (char *)malloc(12);
    strcpy(pName, "Fault");
}

int main()
{

    char *Name;

    InputName(Name);
    printf("이름은 %s입니다\n", Name);
    free(Name);
    return 0;
}

// 왜 안 되는지 생각해보기
