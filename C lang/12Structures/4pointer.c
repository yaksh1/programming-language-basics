#include <stdio.h>

struct student
{
  int roll;
  float cgpa;
  char name[100];
};

int main()
{
  struct student s1 = {109, 9.8, "yaksh"};
  printf("roll:%d\n", s1.roll);

  //normal method
  struct student *ptr = &s1;
  printf("roll:%d\n", (*ptr).roll);

  // arrow operator
  printf("name:%s\n", ptr->name);
  return 0;
}