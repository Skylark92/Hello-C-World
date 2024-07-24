#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char si [] = "인천";
    char ku[] = "서";
    char dong[] = "신현";
    char juso[64];

    strcpy(juso, si);
    strcat(juso, "시 ");
    strcat(juso, ku);
    strcat(juso, "구 ");
    strcat(juso, dong);
    strcat(juso, "동");

    puts(juso);

    return 0;
}
