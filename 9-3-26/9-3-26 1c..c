#include <stdio.h>
int main(){
int n, p;
int result = 1;
scanf("%d %d", &n, &p);
for(int i = 1; i <= p; i++){
result = result * n;
}
printf("%d", result);
 return 0;
}