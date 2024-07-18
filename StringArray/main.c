#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arCon[][32] = { "Korea", "America", "Iran", "Russia" };
    int i;
    for(i = 0; i < sizeof(arCon) / sizeof(arCon[0]); i++) {
        puts(arCon[i]);
    }

    return 0;
}
