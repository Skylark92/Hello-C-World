#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[] = "Korea";
    char *ptr = "Korea";

    puts(str);
    puts(ptr);

    ptr = "China";
//    str = "China";

    str[0] = 'C';
//    ptr[0] = 'C';

    puts(str);

    return 0;
}
