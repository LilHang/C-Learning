#include <stdio.h>
int divide_and_conquer(int list[], int left, int right);

int main(void) {
    int k, i;
    int a[100000];
    scanf("%d", &k);
    for (i = 0; i < k; i++) {
        scanf("%d", &a[i]);
    }

    printf("%d", divide_and_conquer(a, 0, k - 1));

    return 0;
}
int max3(int a, int b, int c) {
    int max;
    if (a > b) {
        if (a > c) {
            max = a;
        } else
            max = c;
    } else if (b > c) {
        max = b;
    } else
        max = c;
    return max;
}
int divide_and_conquer(int list[], int left, int right) {
    int center, i;
    int maxleftbordersum, leftbordersum, maxrightbordersum, rightbordersum;
    int maxleftsum, maxrightsum;
    if (left == right) {
        if (list[left] > 0)
            return list[left];
        else
            return 0;
    }
    center = (left + right) / 2;
    maxleftsum = divide_and_conquer(list, left, center);
    maxrightsum = divide_and_conquer(list, center + 1, right);

    maxleftbordersum = 0, leftbordersum = 0;
    for (i = center; i >= left; i--) {
        leftbordersum += list[i];
        if (leftbordersum > maxleftbordersum)
            maxleftbordersum = leftbordersum;
    }
    maxrightbordersum = 0, rightbordersum = 0;
    for (i = center + 1; i <= right; i++) {
        rightbordersum += list[i];
        if (rightbordersum > maxrightbordersum)
            maxrightbordersum = rightbordersum;
    }

    return max3(maxleftsum, maxrightsum, maxleftbordersum + maxrightbordersum);
}