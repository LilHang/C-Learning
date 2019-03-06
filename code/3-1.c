#include <stdio.h>

int main() {
    int n, i, count;
    double grade, total;

    printf("enter n: ");
    scanf("%d", &n);

    total = 0;
    count = 0;
    for (i = 1; i <= n; i++) {
        printf("enter grade # %d ", i);
        scanf("%lf", &grade);
        total += grade;
        if (grade < 60) {
            count++;
        }
    }
    printf("grade averge = %.2f\n", total / n);
    printf("number of failures = %d\n", count);

    return 0;
}