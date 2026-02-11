#include <stdio.h>
int main() {
    int A,B;
    scanf("%d%d",&A,&B);
 if (A > B) {
        printf("%d", A);
    }
     else if (B > A){
     
        printf("%d", B);
    }
     else {


        printf("Equal");
    }

    return 0;
}