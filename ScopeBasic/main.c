#include <stdio.h>
#include <stdlib.h>

void func();
void proc();
int i = 3;

int main()
{
    printf("i = %d\n", i);
    func();
    proc();
    return 0;
}

void func()
{
    int i = 5;

    printf("i = %d\n", i);
}

void proc()
{
    double i = 3.1415926535897932384626433832795028841971693993;
    printf("i = %.14f", i);
}
