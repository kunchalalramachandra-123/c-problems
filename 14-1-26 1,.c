#include <stdio.h>
int main() {
        char s[50];
        int i = 0;
        scanf("%s",s);
        while(s[i] != '\0')
        i++;
        printf("%d",i);
    
    return 0;
}