#include <stdio.h>

//sum of first n natural numbers using recursion
int sum(int n);

int main(){
  int n;
  printf("enter nth number: ");
  scanf("%d",&n);
  printf("sum is: %d", sum(n));
  return 0;
}

//recursive function
int sum(int n){
  if(n==1){ 
    return 1;
  }
  int sumNm1 = sum(n - 1);//sum of 1 to n-1
  int sumN = sumNm1 + n;
  return sumN;
}

 