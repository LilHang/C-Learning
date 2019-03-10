#include <stdio.h>

double cash;
void income(double);
void expend(double);

int main(void) {
    int choice;
    double value;

    cash = 0;
    printf("enter operate choice(0--end, 1--income, 2--expend): ");
    scanf("%d", &choice);

    while (choice != 0) {
        printf("enter cash value: ");
        scanf("%lf", &value);
        if (choice == 1)
            income(value);
        else
            expend(value);
        printf("current cash: %.2f\n", cash);

        printf("enter operate choice(0--end, 1--income, 2--expend): ");
        scanf("%d", &choice);
    }
    return 0;
}

void income(double number) { cash += number; }

void expend(double number) { cash -= number; }
