#include <Turboc.h>



void main()

{
     char op;

     int a=10, b=5;

     printf("10�� 5�� ������ �����Ͻʽÿ�(+-*/) : ");

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

          printf("+-*/ �� �ϳ��� ������ �ֽʽÿ�.\n");

          break;

     }
}
