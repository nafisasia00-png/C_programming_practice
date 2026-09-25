#include <stdio.h>

int main() {
    float a, b;
    char op;

    scanf("%f %c %f", &a, &op, &b);

    if(op == '+')
        printf("%.2f\n", a + b);

    else if(op == '-')
        printf("%.2f\n", a - b);

    else if(op == '*')
        printf("%.2f\n", a * b);

    else if(op == '/')
        printf("%.2f\n", a / b);

    else
        printf("Invalid operator");

    return 0;
}
