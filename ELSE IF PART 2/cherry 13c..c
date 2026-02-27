#include <stdio.h>
int main() {
   int attendance;
   scanf("%d",&attendance);
   if(attendance>=75)
   printf("eligible to exam");
   else 
   printf("not eligible");
   return 0;
}