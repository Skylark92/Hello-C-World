#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    int low,hi;

    for (;;) {
        printf("0~255사이의 수를 입력하시오 (끝낼 때 -1)  : ");
        scanf("%d",&input);

        if (input == -1) {
                break;
        }

        hi = input >> 4;

        low=input & 0xf;

        printf("입력한 수의 16진 표기 = %c%c\n", hi+'0'+(hi>9)*7,low+'0'+(low>9)*7);
        printf("printf를 활용한 표기 = %X\n", input);
    }


    return 0;
}
