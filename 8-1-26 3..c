#include <stdio.h>
int main() {
    int n,a[50],b[50];
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
        b[i] = a[i];
    }
    for(int i = 0; i < n;i++)
    printf("%d",b[i]);
    return 0;
}