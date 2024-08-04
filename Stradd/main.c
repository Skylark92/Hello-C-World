#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stradd(char *str, int c)
{
        int len = strlen(str);
        str[len] = c;
        str[len + 1] = 0;
}

int main()
{
    char str[128] = "";

    stradd(str, 'a'); puts(str);
    stradd(str, 'b'); puts(str);
    stradd(str, 'c'); puts(str);
    stradd(str, 'd'); puts(str);
    return 0;
}
