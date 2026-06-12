#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter operator (+ - * /): ");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if(op == '+') printf("%.2f\n", a+b);
    else if(op == '-') printf("%.2f\n", a-b);
    else if(op == '*') printf("%.2f\n", a*b);
    else if(op == '/') printf("%.2f\n", a/b);

    return 0;
}
