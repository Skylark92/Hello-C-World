#include <stdio.h>
#include <stdlib.h>

void PrintCount();

int main()
{
    int i;

    for (i = 0; i < 5; i++) {
        PrintCount();
    }
    return 0;
}

void PrintCount()
{
    static int count = 0;

    count++;
    printf("%d��° ȣ��\n", count);
}
