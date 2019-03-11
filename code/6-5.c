#include <stdio.h>

int main(void) {
    char ch;
    printf("input characters: ");
    ch = getchar();
    while (ch != '\n') {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch + 'A' - 'a';
        } else if (ch >= 'A' && ch <= 'Z'){
            ch = ch + 'a' - 'A';
        }
        putchar(ch);
        //ch = getchar();
    }

    return 0;
}
