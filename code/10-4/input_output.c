#include "student.h"

extern int count;

void new_student(struct student students[]) {
    int i, n;
    if (count == MaxSize) {
        printf("the array is full!\n");
        return;
    }
    printf("input the number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("input the student's num : ");
        scanf("%d", &students[i].num);
        printf("input the student's name : ");
        scanf("%s", students[i].name);
        printf("input the student's math score: ");
        scanf("%d", &students[i].math);
        printf("input the student's english score: ");
        scanf("%d", &students[i].english);
        printf("input the student's computer score: ");
        scanf("%d", &students[i].computer);
        count++;
    }
}

void output_student(struct student students[]) {
    int i;
    if (count == 0) {
        printf("count of students is zero! \n");
        return;
    }
    printf("num\tname\tmath\tenglish\tcomputer\taverage\n");
    for (i = 0; i < count; i++) {
        printf("%d\t", students[i].num);
        printf("%s\t", students[i].name);
        printf("%d\t", students[i].math);
        printf("%d\t", students[i].english);
        printf("%d\t", students[i].computer);
        printf("%f\t\n", students[i].average);
    }
}
