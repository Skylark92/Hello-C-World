#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

int main()
{
    // 영문 소문자로 구성된 긴 문장을 입력 받아
    // 이 문자열 내의 각 알파벳 문자 개수를 구해 출력하라.

    int alpha[26] = { 0 };
    char input[101];
    int i;

    printf("입력을 받습니다. 최대 100자\n");

    scanf("%100[a-z]", &input);

    for (i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            alpha[input[i] - 'a']++;
        }
    }

    for (i = 0; i < sizeof(alpha) / sizeof(alpha[0]); i++) {
        printf("%c : %d\n", i + 'a', alpha[i]);
    }
    return 0;
}
