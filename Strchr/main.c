#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[256];
    char *ptr;
    int count = 0;

    printf("아무 문자나 입력하세요(공백없이 최대 255문자)\n");
    scanf("%s", str);

    for (ptr = str;;) {
        ptr = strchr(ptr, 'a');
        if (ptr == NULL) {
            break;
        }
        count++;
        ptr++;
    }

    printf("입력한 문자열에는 a가 %d개 있습니다.\n", count);

    return 0;
}
