#include <stdio.h>
int main() {
    int n,a[100],count = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
        if(a[i] % 2 == 0)
        count++;
    }
    printf("%d",count);
    return 0;
}