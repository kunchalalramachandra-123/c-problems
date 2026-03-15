#include <stdio.h>
int main() {
int n,count = 0;
scanf("%d", &n);
for(int i = n; i > 0; i /= 10) {
int digit = i % 10;
if(digit % 2 == 0) {
count++;
}
}
printf("%d", count);
return 0;
}