#include <stdio.h>

int main(){
  int age;
  printf("Enter age: ");
  scanf("%d", &age);

  age >= 18 ? printf("adult") : printf("not adult");
}