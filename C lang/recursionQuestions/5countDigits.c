#include <stdio.h>

// Write a program in C to count the digits of a given number using recursion

int countDigits(int n);

int main(){

  printf("\n\nWrite a program in C to count the digits of a given number using recursion\n");
  printf("--------------------------------------------------------------------------------\n");

  int n,count;
  printf("enter the number to count the digits: ");
  scanf("%d",&n);

  count = countDigits(n);
  printf("the number of digits in given number is: %d\n\n",count);
  return 0; 
}

int countDigits(int n) {
  static int count;
  if(n!=0){
    count++;
    countDigits(n / 10);
  }
  return count;
}