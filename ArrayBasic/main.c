#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Score[30];

    for (int i = 0; i < 5; i++)
            scanf("%d", &Score[i]);

    int Sum = 0;

    for (int i= 0; i < 5; i++)
        Sum = Sum + Score[i];

    printf("%d", Sum);

    return 0;
}
