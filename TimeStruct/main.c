#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// struct tm {
//    int tm_sec;     /* seconds after the minute - [0,59] */
//    int tm_min;     /* minutes after the hour - [0,59] */
//    int tm_hour;    /* hours since midnight - [0,23] */
//    int tm_mday;    /* day of the month - [1,31] */
//    int tm_mon;     /* months since January - [0,11] */
//    int tm_year;    /* years since 1900 */
//    int tm_wday;    /* days since Sunday - [0,6] */
//    int tm_yday;    /* days since January 1 - [0,365] */
//    int tm_isdst;   /* daylight savings time flag */
//  };

int main()
{
    time_t t;
    struct tm *pt;

    time(&t);
    pt=localtime(&t);

    printf("���� �ð� %d�� %d�� %d�� %d�� %d�� %d���Դϴ�.\n",
        pt->tm_year+1900,pt->tm_mon+1,pt->tm_mday,
        pt->tm_hour,pt->tm_min,pt->tm_sec);

    return 0;
}
