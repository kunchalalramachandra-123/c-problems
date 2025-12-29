#include <stdio.h>

int main() {
    int salary;
    float finalSalary;

    scanf("%d", &salary);

    if (salary >= 50000) {
        finalSalary = salary - (salary * 0.10);
    } else {
        finalSalary = salary;
    }

    printf("%.0f", finalSalary);

    return 0;
}