#include <stdio.h>
int main(void) {
    int i, k;
    int number;
    char str[80];
    char hexad[80];

    printf("enter a string: ");
    i = 0;
    while ((str[i] = getchar()) != '#') i++;
    str[i] = '\0';

    k = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= '0' && str[i] <= '9') ||
            (str[i] >= 'a' && str[i] <= 'f') ||
            (str[i] >= 'A' && str[i] <= 'F')) {
            hexad[k] = str[i];
            k++;
        }
    }
    hexad[k] = '\0';

    printf("new string: ");
    for (i = 0; hexad[i] != '\0'; i++) putchar(hexad[i]);
    printf("\n");

    number = 0;
    for (i = 0; hexad[i] != '\0'; i++) {
        if (hexad[i] >= '0' && hexad[i] <= '9')
            number = number * 16 + hexad[i] - '0';
        else if (hexad[i] >= 'a' && hexad[i] <= 'f')
            number = number * 16 + hexad[i] - 'a' + 10;
        else if (hexad[i] >= 'A' && hexad[i] <= 'F')
            number = number * 16 + hexad[i] - 'A' + 10;
    }
    printf("digit = %d", number);

    return 0;
}