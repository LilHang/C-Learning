#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <stdio.h>
#include <string.h>
#define MaxSize 50

struct student {
    int num;
    char name[10];
    int computer, english, math;
    double average;
};

#endif