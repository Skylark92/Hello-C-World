#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

int main()
{
    int score;

    score = 86 + 65 + 92 +88;
    printf("ÃÑÁ¡ = %d, Æò±Õ = %d\n", score, score/4);

    int i;

    for (i = 1; i < 76; i++) {
        gotoxy(i,10);

        if (i % 2 == 0) {
            puts(" __@");
        } else {
            puts(" ^^@");
        }
        delay(100);
    }

    return 0;
}
