#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[32] = "You are beautiful";
    char str2[] = "very ";

    memmove(str + 13, str + 8, 10);
    memcpy(str + 8, str2, strlen(str2));
    puts(str);

    return 0;
}
