#include <stdio.h>

int main(void) {
    int x;
    printf("enter x ");
    scanf("%d", &x);

    while (x != 0){
        printf("%d", x % 10);
        x = x / 10;
    }
    return 0;
}