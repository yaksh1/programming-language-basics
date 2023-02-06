#include <stdio.h>

struct student{
  int roll;
  float cgpa;
  char name[100];
};

int main(){
  struct student s1 = {109, 9.8, "yaksh"};
  printf("roll:%d\n", s1.roll);
  return 0;
}