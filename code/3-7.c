#include <stdio.h>

int main() {
    char ch;
    int i;
    int digit, letter, other;
    digit = letter = other = 0;
    printf("enter 10 characters: ");
    for (i = 1; i <= 10; i++) {
        ch = getchar();
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            letter++;
        } else if (ch >= '0' && ch <= '9') {
            digit++;
        } else {
            other++;
        }
    }
    printf("letter = %d, digit = %d, other = %d\n", letter, digit, other);

    return 0;
}