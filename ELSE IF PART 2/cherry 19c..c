#include <stdio.h>
int main() {
    int result;
    scanf("%d",&result);
    if(result <=35)
    printf("fail");
    else if(result >=35&&result<=85 )
    printf("pass");
    else
    printf("distinction");
     return 0;
}