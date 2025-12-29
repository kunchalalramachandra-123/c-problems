#include <stdio.h>
int main() {
int age;
scanf("%d", &age);
if (age < 13) {
 printf("Child");
 } else if (age < 20) {
printf("Teen");
} else {
 printf("Adult");
}
return 0;
}