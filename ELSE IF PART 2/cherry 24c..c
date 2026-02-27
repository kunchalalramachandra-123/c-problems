#include <stdio.h>
int main() {
   int length;
   scanf("%d",&length);
   if (length<=4)
   printf("invalid email");
   else if(length>4)
   printf("valid email");
      return 0;
}