#include <stdio.h>
int main() {
    int n,flag = 1;
    scanf("%d",&n);
    if(n <= 1) flag = 0;
    for(int i=2; i<= n/2; i++){
        if(n % i == 0){
            flag = 0;
            break;
        }   
    }
    if(flag)
    printf("prime");
    else
    printf("not prime");
    return 0;
}