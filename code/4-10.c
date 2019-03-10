#include <stdio.h>

int main(void) {
    int i, j, count = 0;
    for (i = 2; i <= 100; i++) {
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) break;
        }
        if (j > i / 2) {
            printf("%-6d", i);
            count++;
            if (count % 10 == 0) printf("\n");
        }
    }
    printf("\n");

    return 0;
}