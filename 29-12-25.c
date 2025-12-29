#include <stdio.h>
int main() {
int bill;
float finalBill;
scanf("%d", &bill);
if (bill >= 5000) {
finalBill = bill - (bill * 0.10);
} else {
finalBill = bill - (bill * 0.05);
 }
printf("%.0f", finalBill);
return 0;
}