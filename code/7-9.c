#include <stdio.h>
int main(void) {
    int a[6][6];
    int n, i, j, temp;
    printf("enter a number: \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            a[i][j] = i *n + j +1;

    printf("origin: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            if (i <= j) {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }

    }

    printf("transposed: \n");
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    return 0;
}