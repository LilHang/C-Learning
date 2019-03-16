#include <stdio.h>
int main(void) {
    int k, i, j;
    int thissum, maxsum = 0;
    int a[100000];

    scanf("%d", &k);
    for (i = 0; i < k; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < k; i++) {
        thissum = 0;
        for (j = i; j < k; j++) {
            thissum += a[j];
            if (thissum > maxsum)
                maxsum = thissum;
        }
    }
    printf("%d", maxsum);

    return 0;
}