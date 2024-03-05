#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[6] = "Korea"; // 마지막 공간은 \0 널 종료 문자
    char st[5] = "Japan";

    printf("%s\n", str);
    puts(st);
    return 0;
}
