#include <stdio.h>

//print value of age from its pointer to pointer
int main(){
  int age = 20;
  int *ptr = &age;
  int **pptr = &ptr;

  printf("age = %d\n",*(*pptr) );
}