#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "�̼���� õ���.";

    strncpy(str + 9, "�ٺ�", 4);

    int len = strlen(str);
    puts(str);
    printf("����Ʈ ���� = %d, sizeof = %d", len, sizeof(str));

    return 0;
}
