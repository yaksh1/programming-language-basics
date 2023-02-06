#include <stdio.h>

// Write a program in C to find the sum of digits of a number using recursion

int sumDigits(int n);

int main(){

  printf("\n\nWrite a program in C to find the sum of digits of a number using recursion\n");
  printf("--------------------------------------------------------------------------------\n");

  int n, count;
  printf("input the number to fund sum of the digits: ");
  scanf("%d", &n);

  printf("the sum of digits of number %d is: %d",n,sumDigits(n));

  return 0;
}

int sumDigits(int n) {

  if(n==0){
    return 0;
  }
  return ((n % 10) + sumDigits(n / 10));
  
}