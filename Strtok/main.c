#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = " I am a boy, you are a girl.";
    char *p;

    p = strtok(str, " ,");
    while (p != NULL) {
        puts(p);
        p = strtok(NULL, " ,");
    }
    return 0;
}
