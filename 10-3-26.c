#include <stdio.h>
int main() {
int M, N, sum = 0;
scanf("%d %d", &M, &N);
for(int i = M; i <= N; i += M) {
sum += i;
}printf("%d", sum);
return 0;
}