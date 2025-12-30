#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z')
    printf("uc");
    else if (ch >= 'a' && ch <= 'Z')
    printf("lc");
    
    
    return 0;
}