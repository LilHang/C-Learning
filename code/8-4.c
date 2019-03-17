#include <stdio.h>
void month_day(int, int, int *, int *);
int main(void) {
    int year, day, month, date;
    printf("input year and day: ");
    scanf("%d%d", &year, &day);
    month_day(year, day, &month, &date);
    printf("%d-%d-%d\n", year, month, date);
    return 0;
}

void month_day(int year, int day, int *p_month, int *p_day) {
    int leap;
    int k;
    int tab[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                      {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

    leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    for (k = 1; day > tab[leap][k]; k++) {
        day -= tab[leap][k];
    }
    *p_month = k;
    *p_day = day;
}