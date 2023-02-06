#include <stdio.h>
#include <string.h>

//store information of students of different branches

struct student {
  char name[100];
  int age;
  int roll;
  float cgpa;
};

int main(){
  struct student ece[100];
  ece[0].age = 19;
  ece[0].roll = 108;
  ece[0].cgpa = 7.98;
  strcpy(ece[0].name,"yaksh");

  printf("age : %d\n",ece[0].age);
  printf("roll : %d\n",ece[0].roll);
  printf("cgpa : %f\n",ece[0].cgpa);
  printf("name : %s\n",ece[0].name);

  return 0;
}