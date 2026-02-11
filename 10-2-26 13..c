#include <stdio.h>

int main() {
    int N;
    
    
    scanf("%d", &N);
    
    if (N < 10 || N > 100) {
        printf("YES");
    }
     else {
        printf("NO");
    }
    
    return 0;
}