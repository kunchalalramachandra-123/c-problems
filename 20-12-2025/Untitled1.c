#include <stdio.h>
int main() {
    int a;
    printf("enter the value of age ");
    scanf("%d",&a);
    if(a>=18){
    printf("eligible");}
    else if(a<=18){
    printf("not eligible");}
    return 0;
}