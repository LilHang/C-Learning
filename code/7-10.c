#include <stdio.h>
int day_of_year(int, int, int);
int main(void) {
    int year, month, day;
    printf("enter year, month, day respectively\n");
    scanf("%d %d %d", &year, &month, &day);
    printf("%d day\n", day_of_year(year, month, day));

}
int day_of_year(int year, int month, int day) {
    int leap, k;
    int tab[2][13] = {{0, 31, 28, 30, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                      {0, 31, 29, 30, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

    for (k = 1; k < month; k++) {
        day += tab[leap][k];
    }
    return day;
}