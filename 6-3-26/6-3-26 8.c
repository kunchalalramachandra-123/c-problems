#include <stdio.h>
int main() {
int n;
scanf("%d",&n);
int first=0;
int second=1;
if(n>=0){
printf("%d ",first);}
if(n>1){
printf("%d ",second);}
if(n>2){
    for(int i=2;i<n;i++){
        int temp=first+second;
        first=second;
        second=temp;
        printf("%d ",temp);
    }
}
return 0;
}