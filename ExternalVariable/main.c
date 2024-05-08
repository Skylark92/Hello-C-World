#include <stdio.h>
#include <stdlib.h>

void func();
extern int value;

int main()
{
    printf("value : %d\n", value);
    func();
    return 0;
}

void func()
{
    printf("Here is func, value : %d\n", value);
}
