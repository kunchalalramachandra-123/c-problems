#include <stdio.h>
int main() {
int connectionType, units;
int bill = 0;
scanf("%d", &connectionType,&units);
switch(connectionType) {
case 1: 
if(units <= 100) {
bill = units * 3;
} 
else {
bill = (100 * 3) + ((units - 100) * 5);
}
bill = bill - 80;
if(bill < 0){
bill = 0;
}
break;
case 2: 
if(units <= 100) {
bill = units * 7;
} 
else {
bill = (100 * 7) + ((units - 100) * 10);
}
break;
default:
printf("Invalid Connection Type");
return 0;
}
printf("Bill ₹%d", bill);
return 0;
}