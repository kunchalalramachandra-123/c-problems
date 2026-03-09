#include <stdio.h>
int main() {
int m, n, sum = 0;
scanf("%d %d", &m, &n);
for(int i = m; i <= n; i++) {
if(i % m == 0) {
sum = sum + i;
}
}
printf("%d", sum);
return 0;
}