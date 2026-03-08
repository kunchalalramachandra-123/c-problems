#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   int rem=0;
   for(int i=1;n>0;i++){
    int b;
    b=n%10;
    rem=rem*10+b;
    n/=10;
   }
    printf("%d",rem);
    return 0;
}