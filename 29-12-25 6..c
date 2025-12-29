#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n % 4 == 0 && n % 8 != 0) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}