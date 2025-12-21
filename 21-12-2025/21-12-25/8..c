#include <stdio.h>

int main() {
    int a;
    scanf("%d", & a);
    if (a >= 20000) {
        a = a + 2000;
    } else {
        a = a + 1000;
    }
    printf("%d", a);
    return 0;
}