#include <stdio.h>
int main(void) {
    int i, k, n;
    int index, temp;
    int a[10];
    printf("enter n: ");
    scanf("%d", &n);
    printf("enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (k = 0; k < n - 1; k++) {
        index = k;
        for (i = k + 1; i < n; i++) {
            if (a[i] < a[index]) index = i;
        }
        temp = a[k];
        a[k] = a[index];
        a[index] = temp;
    }
    printf("after sorted: ");
    for (i = 0; i < n; i++) printf("% d", a[i]);
    printf("\n");

    return 0;
}