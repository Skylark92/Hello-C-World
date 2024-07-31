#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

int main()
{
    int num = 12345;
    int radix;
    char str[32];

    for (radix = 2; radix <= 20; radix++) {
        itoa(num, str, radix);
        printf("%dÁø¹ý : %s\n", radix, str);
    }
    return 0;
}
