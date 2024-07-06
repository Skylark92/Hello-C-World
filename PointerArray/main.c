#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *arps[] = { "°í¾çÀÌ", "°³", "¿À¶û¿ìÅº", "µÅÁö", "Áö··ÀÌ" };
    int i;

    for (i = 0; i < 5; i++) {
        printf("%s\n", arps[i]);
    }

    return 0;
}
