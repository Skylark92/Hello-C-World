#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *env[])
{
    int i;

    printf("���޵� �μ��� ���� = %d\n", argc);
    for (i = 0; i <argc; i++) {
        printf("%d��° �μ� = %s\n", i , argv[i]);
    }

    return 0;
}
