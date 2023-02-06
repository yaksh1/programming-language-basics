#include <stdio.h>

// Write a program in C to print first 50 natural numbers using recursion

int natNum(int n);

int main(){
  int n=1;
  printf("\n\n Recursion : print first 50 natural numbers :\n");
  printf("-------------------------------------------------\n");
  printf(" The natural numbers are :");
  printf("\n\n");
  natNum(n);
}

int natNum(int n) { 
  if(n==51){
    return 51;
  }
  printf("%d ",n);
  natNum(n+1);
}