#include <stdio.h>
#include <stdlib.h>
#include "./external.h"

static void func();

int main()
{
    func();
    external();
    return 0;
}

static void func()
{
    printf("main.c 파일 내의 func\n");
}
