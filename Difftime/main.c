#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    time_t t1, t2;

    time(&t1);
    for (i = 0; i < 100000; i++) {
        printf("��� = %f\n", sin(i * 3.1416 / 180) * cos(i * 3.1416 / 180));
    }
    time(&t2);
    printf("�� %.2f�ʰ� �ɷȽ��ϴ�.", difftime(t2, t1));
    return 0;
}
