#include <stdio.h>
#include <stdlib.h>

// 임의의 실수에서 소수점 이하 두자리수만 추출하여 정수형 변수에 대입하라. 예를 들어 사용자로부터 입력받은 실수 f가 12.3456이라면 34만 추출한다. 이 때 반올림은 고려하지 않아도 상관 없다.
// f가 달러 단위의 화폐 액수라고 할 때 센트 단위만 추출해내는 경우라고 생각하면 된다.
// 음수와 소수점 이하의 자리수가 없는 경우 고려하기

int main()
{
    int i;
    double f;

    printf("실수를 입력하시오 : ");
    scanf("%lf", &f);
    i = (int)(f * 100) % 100;

    printf("i = %d\n", i);
    return 0;
}
