#include <stdio.h>
#include <stdlib.h>

#define randomize() srand((unsigned)time(NULL))
#define random(n) (rand() % (n))

int main()
{
    int i;
    // srand(1234);
    srand((unsigned)time(NULL));

    for (i = 0; i <10; i++) {
            printf("%d ", rand());
    }

    return 0;
}
