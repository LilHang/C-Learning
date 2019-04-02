#include <stdio.h>
int main(void) {
    int i, j, k;
    for (i = 1; i <= 4; i++) {      //控制层数
        for (j = i - 1; j > 0; j--) //控制空格数
            printf(" ");
        for (k = 4 - i + 1; k > 0; k--) //控制*数，注意最后的空格
            if (k != 1)
                printf("* ");
            else
                printf("*\n");
    }
    return 0;
}