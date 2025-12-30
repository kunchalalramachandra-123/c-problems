#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%a %b %c",&a,&b,&c);
    if(a>=b && b>=c)
  printf("%d",a);
  else if (b>=a &&b>=c)
  printf("%d",b);
  else
  printf("%d",c);
    return 0;
}