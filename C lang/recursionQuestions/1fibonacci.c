#include <stdio.h>

//print nth term of fibonacci sequence using recursion

int fibo(int n);

int main(){
  int n;
  printf("enter nth term of fibonacci sequence: ");
  scanf("%d",&n);
  printf("the fib of %d is: %d",n,fibo(n));
  return 0;
}

int fibo(int n) {

    if(n==0){
      return 0;
    }if(n==1){
    return 1;
    }
  
  int fibNm1 = fibo(n - 1);
  int fibNm2 = fibo(n - 2);
  int fibN=fibNm1+fibNm2;
  return fibN;
}