#include <stdio.h>
int main() {
int marks;
scanf("%d", &marks);
if (marks >= 35) {
printf("Pass");
} else if (marks >= 30) {
printf("Grace Pass");
} else {
printf("Fail");
}
return 0;
}