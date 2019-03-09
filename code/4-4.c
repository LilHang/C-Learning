#include <stdio.h>

int main(void) {
    int num;
    int i;
    printf("enter a number: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            break;
        }
    }
    if (i > num / 2 && num != 1) {
        printf("%d is a prime number!\n", num);
    } else {
        printf("No \n");
    }
    return 0;
}