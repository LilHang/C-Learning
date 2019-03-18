#include <stdio.h>
int binary_search(int[], int, int);
int main(void) {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x, m;

    printf("enter x: ");
    scanf("%d", &x);
    m = binary_search(a, 10, x);
    if (m >= 0)
        printf("index is %d\n", m);
    else
        printf("not found\n");
    return 0;
}

int binary_search(int list[], int len, int number) {
    int guess;
    int index_low, index_high, index_guess;
    index_low = 0;
    index_high = len - 1;

    do {
        index_guess = (index_low + index_high) / 2;
        guess = list[index_guess];
        if (guess > number)
            index_high = index_guess - 1;
        else if (guess < number)
            index_low = index_guess + 1;

    } while (index_low <= index_high && guess != number);

    if (index_low <= index_high)
        return index_guess;
    else
        return -1;
}