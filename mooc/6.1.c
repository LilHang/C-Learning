#include <stdio.h>
int main(void) {
    int a, b;
    int i, count = 0;
    int quotient, remain;
    int decimals[200];
    scanf("%d/%d", &a, &b);

    for(i = 0; i < 200; i++) {
        quotient = a * 10 / b;    //获得小数
        decimals[i] = quotient;   //放入数组
        remain = a * 10 % b;
        count++;                 //记录是第几位
        if (remain == 0)         //若余数为0则跳出循环，否则将余数作为新的a
            break;
        else
            a = remain;

    }
    printf("%d.", 0);
    for (i = 0; i < count; i++)
        printf("%d", decimals[i]);
    printf("\n");

    return 0;
}