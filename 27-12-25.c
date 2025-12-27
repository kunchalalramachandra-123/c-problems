#include <stdio.h>

int main() {
    int password;
    scanf("%d", &password);

    if (password == 1234) {
        printf("Access Granted");
    } else {
        printf("Access Denied");
    }

    return 0;
}