#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    for (i = 0; i < 3; i++) {
        printf("¿ÜºÎ ½ÇÇà\n");
        for (j = 0; j < 2; j++) {
            break; // ³»ºÎ ¹Ýº¹¹®¸¸ Å»Ãâ
            printf("³»ºÎ ½ÇÇà\n");
        }
    }

    int flag = 0; // Å»Ãâ º¯¼ö
    for (i = 0; i < 100; i++) {
            printf("Å»Ãâ ¿ÜºÎ ½ÇÇà\n");
        for (j = 0; j < 50; j++) {
            flag = 1;
            break;
            printf("Å»Ãâ ³»ºÎ ½ÇÇà\n");
        }
        if (flag == 1) break;
    }

    int k, l, m, n;
    for (i = 0; i < 100; i++) {
        printf("1ÁßÃ¸\n");
        for (j = 0; j < 100; j++) {
            printf("2ÁßÃ¸\n");
            goto outside;
            for (k = 0; k < 100; k++) {
                printf("3ÁßÃ¸\n");
                for (l = 0; l <100; l++) {
                    printf("4ÁßÃ¸\n");
                    for (m = 0; m < 100; m++) {
                        printf("5ÁßÃ¸\n");
                        for (n = 0; n < 100; n++) {
                            printf("6ÁßÃ¸\n");
                        }
                    }
                }
            }
        }
    }
    outside:


    return 0;
}
