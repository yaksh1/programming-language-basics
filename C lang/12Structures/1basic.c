#include <stdio.h>
#include <string.h>

struct student {
  char name[100];
  int age;
  float cgpa;
};

int main(){
  struct student student1;

  student1.age = 19;
  student1.cgpa = 9;
  strcpy(student1.name, "yaksh");//s.name="yaksh" cannot be written because array cannot be reinitialized

  printf("Age: %d\n", student1.age);
  printf("CGPA: %f\n", student1.cgpa);
  printf("Name: %s\n", student1.name);

  struct student student2;

  student2.age = 22;
  student2.cgpa = 4;
  strcpy(student2.name, "raju");

  printf("Age: %d\n", student2.age);
  printf("CGPA: %f\n", student2.cgpa);
  printf("Name: %s\n", student2.name);
}