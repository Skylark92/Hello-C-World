#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 회원 한 명의 신상
    typedef struct {
        char Name[10]; // 이름
        int Age; // 나이
        double Height; // 키
    } tag_Friend;

    // 동아리에 대한 정보
    typedef struct {
        char Name[16]; // 동아리 이름
        int MemNum; // 회원 수
        tag_Friend Member[50]; // 회원 목록
    } tag_Circle;

    // 동아리 목록
    tag_Circle arCircle[10];

    // 동아리 목록을 가리키는 포인터
    tag_Circle *pCircle;
    pCircle = arCircle;

    // 4번째 동아리의 3번째 회원 나이
    arCircle[4].Member[3].Age = 21;
    // pCircle이 가리키는 동아리의 3번째 회원의 나이
    pCircle->Member[3].Age = 22;
    // pCircle이 가리키는 동아리의 3번째 회원의 이름 중 2번째 문자
    pCircle->Member[3].Name[2] = 'M';
    return 0;
}
