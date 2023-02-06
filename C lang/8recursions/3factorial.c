#include<stdio.h>

//print factorial of n
int factorial(int n);

int main(){
  int n;
  printf("enter the number: ");
  scanf("%d",&n);
  printf("the factorial is: %d", factorial(n));
  return 0;
}

int factorial(int n){
  if(n==1){
    return 1;
  }
  int factNm1 = factorial(n - 1);//factorial from 1 to n-1
  int factN = factNm1 * n;
  return factN;
}