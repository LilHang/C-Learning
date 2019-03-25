#include <stdio.h>
struct student {
    int num;
    char name[10];
    int computer, english, math;
    double average;
};

int main(void) {
    int i, j, n;
    int index;
    struct student students[100], temp;
    printf("input n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("input the info of No.%d: \n", i + 1);
        printf("num: ");
        scanf("%d", &students[i].num);
        printf("name: ");
        scanf("%s", students[i].name);
        printf("computer: ");
        scanf("%d", &students[i].computer);
        printf("english: ");
        scanf("%d", &students[i].english);
        printf("math: ");
        scanf("%d", &students[i].math);
        students[i].average =
            (students[i].math + students[i].english + students[i].computer) /
            3.0;
    }
    for (i = 0; i < n - 1; i++) {
        index = i;
        for (j = i + 1; j < n; j++) {
            if (students[j].average > students[index].average)
            index = j;
        }
        temp = students[index];
        students[index] = students[i];
        students[i] = temp;
    }


    printf("num\t name \t average\n");
    for (i = 0; i < n; i++)
        printf("%d\t%s\t%.2f\n", students[i].num, students[i].name,
               students[i].average);

    return 0;
}