#include <stdio.h>

struct student {
    int num;
    char name[10];
    int computer, english, math;
    double average;
};
int update_score(struct student *p, int n, int, int, int);

int main(void) {
    int i, num, course, score, pos, n;

    struct student students[100];
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
    printf("input the number of updated student: ");
    scanf("%d", &num);
    printf("choice the course: 1.math 2.english 3.computer");
    scanf("%d", &course);
    printf("input the new score: ");
    scanf("%d", &score);

    pos = update_score(students, n, num, course, score);

    if (pos == -1)
        printf("not found!\n");
    else {
        printf("after update: \n");
        printf("num\tmath\tenglish\tcomputer\n");
        printf("%d\t%d\t%d\t%d\n", students[pos].num, students[pos].math,
               students[pos].english, students[pos].computer);
    }

    return 0;
}
int update_score(struct student *p, int n, int num, int course, int score) {
    int i, pos;
    for (i = 0; i < n; i++, p++)
        if (p->num == num) break;
    if (i < n) {
        switch (course) {
            case 1:
                p->math = score;
                break;
            case 2:
                p->english = score;
                break;
            case 3:
                p->computer = score;
                break;
        }
        pos = i;
    } else
        pos = -1;

    return pos;
}