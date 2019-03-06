#include <stdio.h>

int main() {
    int i, n;
    int denominator = 1;
    double sum = 0;
    double sign = 1.0;

    printf("enter n:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += sign / denominator;
        sign = -sign;
        denominator += 2;
    }
    printf("sum = %f", sum);
}