#include <stdio.h>
int main() {
    int n,a[50],i,lar,sec;
    scanf("%d",&n);
    for(i = 0;i < n;i++) 
    scanf("%d",&a[i]);
    lar = sec = -9999;
for(i = 0;i < n;i++){
    if(a[i] > lar){
        sec = lar;
        lar = a[i];
    } else if(a[i] > sec && a[i] != lar){
        sec = a[i];
    }
}
    printf("%d",sec);
    return 0;
}