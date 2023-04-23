#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>

int main() {
    time_t timep;
    struct tm* p;

    time(&timep);
    p = localtime(&timep); //取得当地时间
    printf("%d/%d/%d ", (p->tm_year + 1900), (p->tm_mon + 1), p->tm_mday);
    printf("%d:%d:%d\n", p->tm_hour, p->tm_min, p->tm_sec);
    return 0;
}