#include <Turboc.h>



void main()

{
     char op;

     int a=10, b=5;

     printf("10과 5의 연산을 선택하십시오(+-*/) : ");

     scanf("%c",&op);

     switch (op) {

     case '+':

          printf("10 %c 5 = %d\n",op,a+b);

          break;

     case '-':

          printf("10 %c 5 = %d\n",op,a-b);

          break;

     case '*':

          printf("10 %c 5 = %d\n",op,a*b);

          break;

     case '/':

          printf("10 %c 5 = %d\n",op,a/b);

          break;

     default:

          printf("+-*/ 중 하나를 선택해 주십시오.\n");

          break;

     }
}
