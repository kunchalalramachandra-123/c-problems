
#include <stdio.h>

int main() {

    int N;

    scanf("%d", &N);

    printf("Pre%d ", ++N);

    printf("Post%d", N++);

    return 0;
} 

