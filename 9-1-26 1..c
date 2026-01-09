#include <stdio.h>
int main() {
    int n;
    if(scanf("%d",&n) != 1) return 0;
    int cnt =0,x;
    for(int i = 0;i < n;++i){
        scanf("%d",&x);
        if(x > 0) cnt++;
    }
    printf("%d",cnt);
    return 0;
}