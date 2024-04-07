#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    i = 3;
    printf("전위형으로 썼을 때 : %d\n", ++i);

    i = 3;
    printf("후위형으로 썼을 때 : %d\n", ++i);

    i = 0;
    while (++i < 5) {
        printf("%d\n", i);
    }

    //  for (i = 1; i <= 10; i++) {}
    //  for (i = 1; i <= 10; ++i) {}
    // 둘은 동일하다.

    i = 3;
    printf("%d, %d\n", i, ++i);
    // C는 함수의 인수를 뒤에서부터 전달한다. (호출 규약)

    return 0;
}
