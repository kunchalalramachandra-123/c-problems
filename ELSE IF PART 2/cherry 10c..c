#include <stdio.h>
int main() {
  int account;
  scanf("%d",&account);
  if (account >=4)
  printf("account locked");
  else if (account <=2)
  printf("login allowed");
  else
  printf("login allowed"); 
    return 0;
}