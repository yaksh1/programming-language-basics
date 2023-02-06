#include <stdio.h>

// Write a program in C to calculate the sum of numbers from 1 to n using recursion

int sum(int n);

int main(){
  int n;
  printf("\n\n Recursion : sum of n natural numbers :\n");
  printf("-------------------------------------------------\n");
  printf("enter the nth term: ");
  scanf("%d",&n);
  printf("the sum of first n natural numbers is : %d", sum(n));
}

int sum(int n) {
  if(n==0) return 0;
  int sumNm1 = sum(n - 1);
  return sumNm1 + n;
}