#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "korea";
    char *p;

    p = strchr(str, 'r');
    if (p != NULL) {
        *p = 's';
    }
    puts(str);
    return 0;
}
