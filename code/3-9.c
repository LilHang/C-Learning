#include <stdio.h>

int main(){
    double value1, value2;
    char op;
    printf("type in an expression: ");
    scanf("%lf%c%lf", &value1, &op, &value2);

    switch(op){
        case '+' :
            printf("= %.2f\n", value1 + value2);
            break;
        case '*':
            printf("= %.2f\n", value1 * value2);
            break;
        case '/':
            printf("= %.2f\n", value1 / value2);
            break;
        default :
            printf("unknown operator \n");
            break;
    }

    return 0;
}