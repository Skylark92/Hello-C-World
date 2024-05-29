#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int ar[2][3] = {1, 2, 3, 4, 5, 6};
    // int ar[2][3] = {{ 1, 2, 3} , { 4, 5, 6 }};
    // int ar[2][3] = {
    //    { 1, 2, 3 },
    //    { 4, 5, 6 },
    // };
    // int ar[2][3] = {{ 1 }, { 4, 5, 6 }};
    // int ar[2][3] = {{ 1, 2, 3 }, { 4, 5, 6, 7 }}; // Too Many Initializer
    int ar[][3] = {{ 1, 2, 3 }, { 4, 5, 6 }, { 7, }, { 8, 9, 10 }};
     // int ar[][] = {{ 1, 2, 3 }, { 4, 5, 6 }}; // 컴파일러는 해석할 수 없음

    int i, j;
    for (i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
            for (j = 0; j <sizeof(ar[0]) / sizeof(ar[0][0]); j++) {
                printf("ar[%d][%d] = %d\n", i, j, ar[i][j]);
            }
    }
    return 0;
}
