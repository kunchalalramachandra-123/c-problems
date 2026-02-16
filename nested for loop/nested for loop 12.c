#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            printf("%d",j);
        }
        for(int k=1;k<=(n-i)*2;k++){
            printf(" ");
        }
        for(int h=i-1;h>=1;h--){
            printf("%d",h);
        }
        printf("\n");
    }
    return 0;
}