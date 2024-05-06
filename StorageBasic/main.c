#include <Turboc.h>
void func();

int global; // 함수 외부에서 선언되었으므로 전역변수

int main()
{
    int local; // main 함수의 지역변수

    // global = 1; // 가능
    // local = 2; // 가능

    // i = 3; // 불가능

    printf("global : %d, local : %d\n", global, local); // GNU GCC 컴파일러는 local도 초기화 해주나?
    return 0;
}

void func()
{
    int i; // func 함수의 지역변수

    global = 1;
    // local = 2; // 불가능
    i = 3; // 가능
}
