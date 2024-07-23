#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "이석우는 천재다.";

    strncpy(str + 9, "바보", 4);

    int len = strlen(str);
    puts(str);
    printf("바이트 길이 = %d, sizeof = %d", len, sizeof(str));

    return 0;
}
