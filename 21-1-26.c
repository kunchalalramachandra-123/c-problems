#include <stdio.h>
int main() {
    int num,ld,sld,sum;
    printf("enter a number");
    scanf("%d",&num);
    ld=num%10;
    sld=(num/10)%10;
    sum=ld+sld;
    printf("sum of the ld %d",sum);
    
    return 0;
}