#include <stdio.h>

int main() {
    char ch;
    int i;
    for (i = 1; i <= 5; i++) {
        ch = getchar();
        printf("%c", ch);
    }

    printf("%c", ch);
    return 0;
}