#include <stdio.h>

//swap the values of two numbers using function calls

void swap(int a, int b);
void _swap(int *a, int *b);
int main(){
  int x = 5;
  int y = 2;

  printf("original x and y values: x = %d, y = %d\n", x, y);
  
  //by value
  swap(x, y);
  printf("x = %d, y = %d\n", x, y);

  //by reference  
  _swap(&x, &y);
  printf("x = %d, y = %d\n", x, y);

}

//call by value
void swap(int a, int b){
  int c = a;
  a = b;
  b = c;
  printf("a = %d, b = %d\n",a,b);
}

//call by reference
void _swap(int *a, int *b){
  int c = *a;
  *a = *b;
  *b = c;
  printf("a = %d, b = %d\n",*a,*b);
}