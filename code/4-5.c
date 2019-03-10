#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int count = 0, flag = 0, mynumber, yournumber;
    srand(time(0));
    mynumber = rand() % 100 + 1;

    while (count < 7) {
        printf("enter your number ");
        scanf("%d", &yournumber);
        count++;
        if (yournumber == mynumber) {
            printf("lucky you\n");
            flag = 1;
            break;
        } else if (yournumber > mynumber) {
            printf("too big\n");
        } else {
            printf("too small\n");
        }
    }
    if (flag == 1) {
        printf("game over\n");
    }
    return 0;
}