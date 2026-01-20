#include <stdio.h>
#include <stdio.h>
int main() {
    char str[100];
    int i;
    printf("enter a string");
    scanf("%s",str);
    for(i = 0;str[i] != '\0';i++){
        str[i]=toupper(str[i]);
    }
    printf("uppercase: %s",str);

    
    return 0;
}