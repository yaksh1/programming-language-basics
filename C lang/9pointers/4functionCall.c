#include <stdio.h>

void square(int n);
void _square(int*n);

int main(){
  int num = 3;
  
  square(num);
  printf("number: %d\n", num);

  _square(&num);
  printf("number: %d\n", num);
}

//function call by value
void square(int n){
  n = n * n;
  printf("square = %d\n", n);
}

//function call by reference
void _square(int* n){
  *n = (*n) * (*n);
  printf("_square = %d\n",*n);
}