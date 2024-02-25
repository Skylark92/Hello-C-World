#include <stdio.h>

int main()
{
    double pie = 3.14;

    printf("-->%f<--\n", pie);
    printf("-->%10f<--\n", pie);
    printf("-->%.2f<--\n", pie);
    printf("-->%10.2f<--\n", pie);
    printf("-->%010.2f<--\n", pie);
    printf("-->%-10.2f<--\n", pie);
}
