#include <stdio.h>
int main() {
    int num,lastdigit,secondlastdigit,sum;
    printf("enter the number");
    scanf("%d",&num);
    lastdigit=num % 10;
    secondlastdigit=(num / 10)% 10;
    sum = lastdigit + secondlastdigit;
    printf("sum of the last two digits %d",sum);
    
    return 0;
}