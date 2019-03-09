#include <stdio.h>

int main(void) {
    int num;
    int count = 0;
    printf("enter a number\n");
    scanf("%d", &num);

    do {
        num = num / 10;
        count++;
    } while (num != 0);

    printf("it contains %d digits.\n", count);

    return 0;
}