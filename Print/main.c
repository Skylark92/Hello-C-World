#include <stdio.h>
#include <stdlib.h>

int main()
{
    print3();
    return 0;
}

void print1()
{
    int value = 12;
    char ch = 'S';

    printf("값은 %d이며 문자는 %c이다.\n", value, ch);
}

void print2()
{
    int Num = 123;

    printf("-->%d<--\n", Num);
    printf("-->%5d<--\n", Num);
    printf("-->%05d<--\n", Num);
    printf("-->%-5d<--\n", Num);
}

void print3()
{
    double pie = 3.14;
    printf("-->%f<--\n", pie);
    printf("-->%10f<--\n", pie);
    printf("-->%.2f<--\n", pie);
    printf("-->%10.2f<--\n", pie);
    printf("-->%-10.2f<--\n", pie);
}
