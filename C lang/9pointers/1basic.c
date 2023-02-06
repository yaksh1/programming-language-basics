#include <stdio.h>

int main(){
  int age = 19;
  int *ptr = &age;
  int _age = *ptr;


  //to print address
  printf("%p\n", &age);
  printf("%p\n", ptr);
  printf("%p\n", &ptr); //you can also use %u to print the address

  //to print the value at address
  printf("%d\n", _age);
  printf("%d\n", *ptr);
  printf("%d\n", *(&age));
}