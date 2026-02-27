#include <stdio.h>
int main() {
 int temp;
 scanf("%d",&temp);
 if(temp <18)
 printf("heating mode");
 else if(temp>18&&temp<=25)
 printf("normal mode");
 else
 printf("cooling mode");    
    return 0;
}