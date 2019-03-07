#include <stdio.h>

int main() {
    int denominator = 1;
    double item = 1.0;
    double flag = 1.0;
    double pi = 0;
    while (item >= 0.0001 || item <= -0.0001) {
        item = flag / denominator;
        pi += item;
        flag = -flag;
        denominator += 2;
    }
    printf("pi = %.4f\n", 4 * pi);

    return 0;
}