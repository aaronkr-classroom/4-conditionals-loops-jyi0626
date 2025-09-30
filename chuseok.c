#include <stdio.h>
#include <time.h>

int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int get_last_day(int year, int month) {
    switch (month) {
    case 2: return is_leap_year(year) ? 29 : 28;
    case 4: case 6: case 9: case 11: return 30;
    default: return 31;
    }
}

int get_weekday(int year, int month, int day) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int h = (day + (13 * (month + 1)) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
   
    int d = (h + 6) % 7;  
    return d;
}

int main() {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    int year = tm.tm_year + 1900;
    int month = tm.tm_mon + 1;
    int today = tm.tm_mday;

    int chuseok_day = 6;
    int chuseok_month = 10;

    if (month == chuseok_month) {
        printf("Chuseok is coming!\n");
    }
    else {
        printf("No Chuseok yet ㅠㅠ\n");
    }

    int last_day = get_last_day(year, month);
    int start_weekday = get_weekday(year, month, 1);

    printf("       %d년 %d월\n", year, month);
    printf("일  월  화  수  목  금  토\n");

 
    for (int i = 0; i < start_weekday; i++) {
        printf("    ");
    }

    int weekday = start_weekday;

    for (int day = 1; day <= last_day; day++) {
        if (day == today)
            printf("[%2d]", day);
        else
            printf(" %2d ", day);

        weekday++;
        if (weekday == 7) {
            printf("\n");
            weekday = 0;
        }
    }
    printf("\n");

    return 0;
}
