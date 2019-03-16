#include <stdio.h>
int MaxSubseqsum(int list[], int n);

int main(void) {
    int k, i;
    int a[100000];
    scanf("%d", &k);
    for (i = 0; i < k; i++) {
        scanf("%d", &a[i]);
    }

    printf("%d", MaxSubseqsum(a, k));

    return 0;
}
int MaxSubseqsum(int list[], int n) {
    int i;
    int thissum = 0, maxsum = 0;
    for (i = 0; i < n; i++) {
        thissum += list[i];
        if (thissum > maxsum)
            maxsum = thissum;
        else if (thissum < 0)
            thissum = 0;
    }
    return maxsum;
}
