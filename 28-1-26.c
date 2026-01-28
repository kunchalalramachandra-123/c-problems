#include <stdio.h>

int main() {
char op;
float a, b;

 printf("Enter operator (+, -, *, /): ");
scanf(" %c", &op);

 printf("Enter two numbers: ");
 scanf("%f %f", &a, &b);

if (op == '+') {
printf("Result = %.2f", a + b);
 } else if (op == '-') {
 printf("Result = %.2f", a - b);
    } else if (op == '*') {
 printf("Result = %.2f", a * b);
    } else if (op == '/') {
     if (b != 0)
printf("Result = %.2f", a / b);
 else
 printf("Division by zero not allowed");
 } else {
 printf("Invalid operator");
}

return 0;
}