#include <stdio.h>

int main() {
    char ch;
    int i;
    int digit, blank, other;
    digit = blank = other = 0;
    printf("enter 10 characters: ");

    for (i = 1; i <= 10; i++) {
        ch = getchar();
        switch (ch) {
            case ' ':
            case '\n':
                blank++;
                break;
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                digit++;
                break;
            default:
                other++;
                break;
        }
    }
    printf("digit = %d, blank = %d, other = %d", digit, blank, other);

    return 0;
}