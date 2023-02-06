#include <stdio.h>

int main(){
  int a, b;
  printf("enter your number: ");
  scanf("%d", &a);
  printf("%d", a % 2 == 0);
}