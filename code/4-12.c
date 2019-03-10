#include <stdio.h>

int main(void) {
    int men, women, children;
    int count = 0;

    for (men = 0; men <= 15; men++)
        for (women = 0; women <= 22; women++) {
            children = 45 - men - women;
            if (men + women + children == 45 &&
                men * 3 + women * 2 + children * 0.5 == 45) {
                printf("men = %d, women = %d, children = %d\n", men, women,
                       children);
                count++;
            }
        }
    printf("total: %d\n", count);
    return 0;
}