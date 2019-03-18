#include <stdio.h>
void bubble(int[], int);
int main(void) {
    int i, n;
    int a[8];
    printf("enter a number(<=8): ");
    scanf("%d", &n);
    printf("enter a[%d]: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", a + i);
    bubble(a, n);
    printf("after sorted: ");
    for (i = 0; i < n; i++)
        printf("%3d", *(a + i));
    return 0;
}

void bubble(int list[], int n) {
    int i, j;
    int temp;

    for (i = 1; i < n; i++)
        for (j = 0; j < n - i; j++)
            if (list[j] > list[j + 1]) {
                temp = *(list + j);
                *(list + j) = *(list + j + 1);
                *(list + j + 1) = temp;
            }
}