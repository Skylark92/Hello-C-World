#include <stdio.h>
#include <stdlib.h>

void arDump(void *array, int length);

int main()
{
    int ari[] = { 1, 2, 3, 4, 5 };
    char arc[] = "Pointer";

    arDump(ari, sizeof(ari));
    arDump(arc, sizeof(arc));

    return 0;
}

void arDump(void *array, int length)
{
    int i;

    for (i = 0; i < length; i++) {
        printf("%02X ", *((unsigned char *)array + i));
    }
    printf("\n");
}
