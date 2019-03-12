#include <stdio.h>
int main(void) {
    int a[10] = {1, 1};
    int i;
    for (i = 2; i < 10; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    for (i = 0; i < 10; i++) {
        printf("%6d\n", a[i]);
    }
    return 0;
}