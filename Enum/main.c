#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum { EAST = 5, WEST = 10, SOUTH, NORTH } mark;
    enum fruit { APPLE, ORANGE, BANANA };

    enum fruit a = ORANGE; // C������ enum ���� ���� �Ұ�
    mark = NORTH;

    printf("%d, %d\n", mark, a);
    return 0;
}
