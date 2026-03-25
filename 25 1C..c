#include <stdio.h>
int main() {
   int marks;
   scanf("%d",&marks);
   switch(marks/10){
    case 10:
    printf("grade A");
    break;
    case 9:
    if (marks%10==0){
        printf("grade B");
        break;
    }
    else{
        printf("grade A");
        break;
    }
    case 8:
    if (marks%10==0){
        printf("grade C");
        break;
    }
    else{
        printf("grade B");
        break;
    }case 7:
    if (marks%10==0){
        printf("grade D");
        break;
    }
    else{
        printf("grade C");
        break;
    }case 6:
    if (marks%10==0){
        printf("grade E");
        break;
    }
    else{
        printf("grade D");
        break;
    }
    case 5:
    if (marks%10==0){
        printf("grade F");
        break;
    }
    else{
        printf("grade E");
        break;
    }
    case 4:
    if (marks%10==0){
        printf("supplementry ");
        break;
    }
    else{
        printf("grade F");
        break;
    }
    default:
    if(marks<40&&marks>30){
        printf("supplementry");
    }
    else if(marks>=0&&marks<=30){
        printf("fail");
    else{
        printf("invalid input");
    }
   }

    return 0;
}