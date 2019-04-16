#include <stdio.h>
int main(void) {
    char *pinyin[] = {"ling", "yi",  "er", "san", "si",
                      "wu",   "liu", "qi", "ba",  "jiu"};
    char *say[7];
    int size = 0, i, num, dig;
    scanf("%d", &num);

    if (num < 0) {              //若小于0，则输出fu，并转化为正数
        printf("%s ", "fu");
        num *= -1;
    }

    do {
        dig = num % 10;           //取末位的数字
        say[size] = pinyin[dig];  //拼音转化，倒序放入数组
        num /= 10;
        size++;                  // 计算输入数的位数
    } while (num != 0);

    for (i = size - 1; i >= 0; i--) {  //从末末位输出
        if (i == 0)                    //格式控制
            printf("%s", say[i]);
        else
            printf("%s ", say[i]);
    }

    return 0;
}