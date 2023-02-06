#include <stdio.h>

//alias can be created by using TYPEDEF STRUCT

typedef struct computerScienceStudent{
  int roll;
  float cgpa;
} cse;

int main(){
  cse s1 = {344,9.3};
  printf("roll: %d\n", s1.roll);
}