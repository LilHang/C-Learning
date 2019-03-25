#include <stdio.h>
struct student {
    int num;
    char name[10];
    int computer, english, math;
    double average;
};

int main(void) {
    int i, n;
    struct student s1, max;
    printf("input n: ");
    scanf("%d", &n);
    printf("input the student's number, name and course scores\n");
    for (i = 1; i <= n; i++) {
        printf("NO.%d: ", i);
        scanf("%d%s%d%d%d", &s1.num, s1.name, &s1.computer, &s1.english,
              &s1.math);
        s1.average = (s1.computer + s1.english + s1.math) / 3.0;
        if (i == 1 || s1.average > max.average) max = s1;
    }
    printf("num:%d, name: %s, average: %.2f\n", max.num, max.name, max.average);

    return 0;
}