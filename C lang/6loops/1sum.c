#include<stdio.h>

int main(){
  //sum of first n natural numbers and print number in reverse order
  int n,i,j,sum=0;
  printf("enter the nth natural number: ");
  scanf("%d",&n);

  for (i = 1,j=n; i <= n && j>=1;i++,j--){
    sum += i;
    printf("%d\n ",j);
  }
  printf("the sum of the first n natural numbers: %d",sum);
  return 0;
}