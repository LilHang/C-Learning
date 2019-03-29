#include <stdio.h>
int main(void) {
    int i, n;
    scanf("%d", &n);
    if (n % 2) {
        for (i = 1; i <= n - 1; i += 2) {
            printf("%d ", i);
        }
        printf("%d", i);
    } else {
        for (i = 1; i <= n - 2; i += 2) {
            printf("%d ", i);
        }

        printf("%d", i);
    }
    return 0;
}