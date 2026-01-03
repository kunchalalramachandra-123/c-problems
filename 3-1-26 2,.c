#include <stdio.h>
int main() {
    int n,temp, rev =0;
    scanf("%d",&n);
    temp =n;
    while(n =10){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if  (temp == rev)
    printf("P");
    else
    printf("N P");

    return 0;
}