#include <stdio.h>

typedef struct student{
  char name[50];
  int rollNo;
}stu;

void accept(stu s[50],int n){
  for (int i = 0; i < n;i++){
    printf("enter name of the student: ");
    scanf("%s", &s[i].name);
    printf("enter rollNo number of the student: ");
    scanf("%d", &s[i].rollNo);
  }
}

void display(stu s[50],int n){
  for (int i = 0; i < n; i++)
  {
    printf("name: %s, rollNo: %d\n", s[i].name, s[i].rollNo);
  }
}

void bubble(stu s[50],int n){
  for(int)
}

int main(){
  stu s[50];
  int n;
  printf("enter students: ");
  scanf("%d", &n);
  accept(s, n);
  display(s, n);
}