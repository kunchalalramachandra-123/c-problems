#include <stdio.h>
int main() {
   int balance;
   scanf("%d",&balance);
   if(balance>=1000)
   printf("sufficient balance");
   else
   printf("low balance");
    return 0;
}