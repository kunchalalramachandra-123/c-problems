#include <stdio.h>
int main() {
    int  seats;
    scanf("%d",&seats);
    if(seats==5)
    printf("confirmed");
    else if(seats==0)
    printf("waiting list");
     return 0;
}