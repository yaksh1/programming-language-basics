#include <stdio.h>

struct student {
  char name[100];
  int roll;
  float cgpa;
};

void printInfo(struct student s1);

int main(){
  struct student s1 = {"yaksh", 119, 9.2};
  printInfo(s1);
  return 0;
}

void printInfo(struct student s1){
  printf("\n\nstudent information:\n");
  printf("name: %s\n", s1.name);
  printf("roll no.: %d\n", s1.roll);
  printf("cgpa: %f\n", s1.cgpa);
}