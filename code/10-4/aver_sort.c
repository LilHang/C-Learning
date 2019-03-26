#include "student.h"
extern int count;
void average(struct student s[]) {
    int i;
    for (i = 0; i < count; i++)
        s[i].average = (s[i].computer + s[i].math + s[i].english) / 3.0;
}

void sort(struct student s[]) {
    int i, j, index;
    struct student temp;
    for (i = 0; i < count - 1; i++) index = i;
    for (j = i + 1; j < count; j++) {
        if (s[j].average > s[index].average) index = j;
        temp = s[index];
        s[index] = s[i];
        s[i] = temp;
    }
}
