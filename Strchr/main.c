#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[256];
    char *ptr;
    int count = 0;

    printf("�ƹ� ���ڳ� �Է��ϼ���(������� �ִ� 255����)\n");
    scanf("%s", str);

    for (ptr = str;;) {
        ptr = strchr(ptr, 'a');
        if (ptr == NULL) {
            break;
        }
        count++;
        ptr++;
    }

    printf("�Է��� ���ڿ����� a�� %d�� �ֽ��ϴ�.\n", count);

    return 0;
}
