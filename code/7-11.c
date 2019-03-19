#include <stdio.h>
int main(void) {
    int i, k;
    int flag = 1;
    k = 0;
    char line[80];
    printf("enter string: ");
    while ((line[k] = getchar()) != '\n')
        k++;
    line[k] = '\0';

    i = 0;
    k = k - 1;

    while (i < k) {
        if (line[i] != line[k]) {
        flag = 0;
        break;
    }
        i++;
        k--;
}
    if (flag == 1)
        printf("it is a palindrome\n");
    else
        printf("it is not a palindrome\n");

    return 0;
}