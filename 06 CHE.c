#include <stdio.h>
int main() {
    struct date{
        int month;
        int day;
        int year;
    };
    struct date today;
    today.month = 9;
    today.day = 25;
    today.year = 2004;
    printf("today's.date is")    
    return 0;
}