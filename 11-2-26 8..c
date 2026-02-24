#include <stdio.h>
int main() {
 int A,B;
 scanf("%d%d",&A,&B);
  A = A ^ B;
 B = A ^ B;
A = A ^ B;
printf("%d %d", A, B);
return 0;
}  
    
    
