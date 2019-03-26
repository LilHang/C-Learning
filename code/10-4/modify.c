#include "student.h"
extern int count;
void modify(struct student *p) {
    int num, course, score, i;
    printf("input the number of updated student: ");
    scanf("%d", &num);
    printf("choice the course: 1.math 2.english 3.computer: ");
    scanf("%d", &course);
    printf("input the new score: ");
    scanf("%d", &score);
    for (i = 0; i < count; i++, p++) {
        if (p->num == num) break;
    }
    if (i < count) switch (course) {
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
}
void search_student(struct student students[], int num) {
    int i, flag = 0;
    if (count == 0) {
        printf("count of students is zero!\n");
        return;
    }
    for (i = 0; i < count; i++) {
        if (students[i].num == num) {
            flag = 1;
            break;
        }
    }
    if (flag) {
        printf("num:%d,", students[i].num);
        printf("name:%s,", students[i].name);
        printf("math:%d,", students[i].math);
        printf("english:%d,", students[i].english);
        printf("computer:%d,", students[i].computer);
        printf("average:%.2f\n,", students[i].average);

    } else {
        printf("not found!\n");
    }
}
