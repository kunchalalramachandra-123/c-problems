#include <stdio.h>
int main() {
    int n,a[50];
    scanf("%d",&n);
    for(int i = n - 1;i >= 0;i++)
    scanf("%d",&a[i]);
    for(int i = n - 1;i >= 0;i--)
    printf("%d",a[i]);
    return 0;
}