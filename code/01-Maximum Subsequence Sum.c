#include <stdio.h>
void MaxSubseqsum(int list[], int n);

int main(void) {
    int k, i;
    int a[100000];
    scanf("%d", &k);
    for (i = 0; i < k; i++) {
        scanf("%d", &a[i]);
    }

    MaxSubseqsum(a, k);

    return 0;
}
void MaxSubseqsum(int list[], int n) {
    int i, l = 0;
    int left, right;
    int thissum = 0, maxsum = -1; // maxsum = 1
    for (i = 0; i < n; i++) {
        thissum += list[i];
        if (thissum > maxsum) {
            right = i;
            left = l;
            maxsum = thissum;
        } else if (thissum < 0) {
            l = i + 1;
            thissum = 0;
        }
    }
    if (maxsum >= 0)
        printf("%d %d %d", maxsum, list[left], list[right]);
    else
        printf("%d %d %d", 0, list[0], list[n - 1]);
}