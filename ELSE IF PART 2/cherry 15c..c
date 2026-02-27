#include <stdio.h>
int main() {
    int marks,income;
    scanf("%d%d",&marks,&income);
    if(marks>=90&&income >=200000)
    printf("eligible");
    else
    printf("not eligible");
     return 0;
 }