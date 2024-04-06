#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 좌변값은 대입 연산자의 왼쪽에 올 수 있는 값으로,
    // 실제적인 메모리를 점유하고 있고, 값을 마음대로 바꿀 수 있어야 한다.

    //  1 = 2 + 3;
    //  a + b = 4;
    // 상수나 수식은 좌변값이 아니다.

    char str[12];
    //  str = "STRING"; // 에러 발생
    // 가장 많이 하는 실수, 배열의 이름인 str은 좌변값이 아니다.

    // 모든 연산자는 연산 후 리턴값이 존재한다. (연산자도 일종의 함수인 것)
    // 대입연산자도 대입된 값 그 자체를 리턴한다.

    str[0] = 'S';
    str[1] = 'T';
    str[2] = 'R';
    str[3] = 'I';
    str[4] = 'N';
    str[5] = 'G';

    char str2[6] = "hello";

    puts(str);
    puts(str2);

    return 0;
}
