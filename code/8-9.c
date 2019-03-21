#include <stdio.h>
#include <string.h>
#define MAXLINE 100
void encrypt(char *);
int main(void) {
    char line[MAXLINE];

    printf("input the string: ");
    gets(line);
    encrypt(line);
    printf("%s%s\n", "after encrypted: ", line);
    return 0;
}

void encrypt(char *line) {
    for (; *line != '\0'; line++) {
        if (*line == 'z')
            *line = 'a';
        else
            *line = *line + 1;
    }
}