#include <stdio.h>

int main() {
    int n;
    int i;
    int sum = 0;
    printf("enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }
    printf("sum of numbers from 1 to %d is %d", n, sum);
    return 0;
}