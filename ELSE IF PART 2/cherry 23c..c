#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n==0)
    printf("neutral");
    else if(n<0)
    printf("negative");
    else 
    printf("postive");
    return 0;
}