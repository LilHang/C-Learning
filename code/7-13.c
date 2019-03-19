#include <stdio.h>
int main(void) {
    int i,  k;
    int number;
    int line[80];
    k = 0;
    while ((line[k] = getchar() )!= '\n')
        k++;
    line[k] = '\n';

    number = 0;
    for (i = 0; line[i] != '\0'; i++)
        if (line[i] >= '0' && line[i] <= '9')
            number = number * 10 + line[i] - '0';

    printf("digit = %d", number);

    return 0;

}