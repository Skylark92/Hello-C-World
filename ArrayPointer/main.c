#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[6] = {'K', 'o', 'r', 'e', 'a'};
    printf("%s\n", str);

    int i;
    int ar[5] = {1, 2, 3, 4, 5};
    int ar2[5];

    for (i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
        ar2[i] = ar[i];
    }

    printf("%d, %d\n", ar[4], ar2[4]);

    char strn[10];
    scanf("%s", strn);

    printf("ÀÔ·ÂµÊ : %s\n", strn);

    return 0;
}
