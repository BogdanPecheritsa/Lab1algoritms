#include <stdio.h>
#include <time.h>

struct compact_datetime {
    unsigned int year : 12;
    unsigned int month : 4;
    unsigned int day : 5;
    unsigned int hour : 5;
    unsigned int minute : 6;
    unsigned int second : 6;
};

int main() {
    time_t now = time(NULL);
    struct tm t;
    localtime_s(&t, &now);

    struct compact_datetime dt;
    dt.year = t.tm_year + 1900;
    dt.month = t.tm_mon + 1;
    dt.day = t.tm_mday;
    dt.hour = t.tm_hour;
    dt.minute = t.tm_min;
    dt.second = t.tm_sec;

    printf("Розмір структури tm: %zu байт\n", sizeof(struct tm));
    printf("Розмір нашої структури: %zu байт\n", sizeof(struct compact_datetime));

    printf("Дата і час: %04u-%02u-%02u %02u:%02u:%02u\n",
        dt.year, dt.month, dt.day, dt.hour, dt.minute, dt.second);

    return 0;
}