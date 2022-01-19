#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void printCurrentTime() {
    time_t now;
    time(&now);
    printf("%s\n", ctime(&now));
}

char WEEKDAY[7][10] = {
    "Sunday",   "Monday", "Tuesday",  "Wednesday",
    "Thursday", "Friday", "Saturday",
};

void printTimeDetails(bool dayOfYear, bool dayOfWeek, bool year, bool month,
                       bool dayOfMonth, bool hour, bool minute, bool second) {
    time_t now;
    time(&now);
    struct tm *clock = localtime(&now);
    int padding = 18;
    puts("Time details:");
    if (dayOfYear)
        printf("%*s: %d\n", padding, "Day of the year", clock->tm_yday);
    if (dayOfWeek)
        printf("%*s: %s\n", padding, "Day of the week",
               WEEKDAY[clock->tm_wday]);
    if (year)
        // Year since 1900
        printf("%*s: %d\n", padding, "Year", clock->tm_year + 1900);
    if (month)
        // Month values range from [0-11]
        printf("%*s: %d\n", padding, "Month", clock->tm_mon + 1);
    if (dayOfMonth)
        printf("%*s: %d\n", padding, "Day of the month", clock->tm_mday);
    if (hour)
        printf("%*s: %d\n", padding, "Hour", clock->tm_hour);
    if (minute)
        printf("%*s: %d\n", padding, "Minute", clock->tm_min);
    if (second)
        printf("%*s: %d\n", padding, "Second", clock->tm_sec);
}

int main(int argc, char *argv[]) {
    if (argc < 2)
        puts("Hello there");
    else
        printf("Hello %s\n", argv[1]);

    printTimeDetails(true, true, true, true, true, true, true, true);

    return (EXIT_SUCCESS);
}
