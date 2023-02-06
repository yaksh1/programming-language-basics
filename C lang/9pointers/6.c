#include <stdio.h>

//write a function to print sum,product and average of 2 numbers

void operations(int a, int b,int *sum,int *product,int *average);

int main(){
  int a=2, b=4;
  int sum, product, average;
  operations(a,b,&sum,&product,&average);
  printf("sum: %d, product: %d, average: %d\n",sum,product,average);
}

void operations(int a, int b,int *sum,int *product,int *average){
  *sum = a + b;
  *product = a * b;
  *average = (a + b) / 2;
}