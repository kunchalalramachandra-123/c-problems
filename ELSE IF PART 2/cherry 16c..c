#include <stdio.h>
int main() {
   int level;
   scanf("%d",&level);
   if(level>=90)
   printf("overflow warning");
   else
   printf("safe level");
    return 0;
}