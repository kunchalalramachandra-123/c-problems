#include <stdio.h>
int main() {
int N;
scanf("%d", &N);
(N > 0) ? printf("POSITIVE") :
(N < 0) ? printf("NEGATIVE") :
printf("ZERO");
return 0;
}