#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n % 2 == 0 || n % 3 == 0)
    printf("yes");
    else
    printf("no");
   return 0;
}