#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *pCon[] = { "Korea", "America", "Iran", "Russia" };
    int i;

    for (i = 0; i < sizeof(pCon) / sizeof(pCon[0]); i++) {
        puts(pCon[i]);
    }

    return 0;
}
