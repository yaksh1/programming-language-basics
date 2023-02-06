#include <stdio.h>

struct student{
  char name[50];
  int rollNo;
  int marks;
}student[10];

int nonRecursiveBinary(struct student s[10], int targetRoll,int n){
  int start = 0;
  int end = n-1;
  while(start<=end){
    int mid = start+ (end-start)/ 2;
    if(targetRoll<s[mid].rollNo){
      end = mid - 1;
    }else if(targetRoll>s[mid].rollNo){
      start = mid + 1;
    }else{
      printf("record found, the location is : ");
      return mid;
      break;
    }
  }
  return -1;
}

int recursiveBinary(struct student s[10],int targetRoll,int start,int end){
  if(start<=end){
    int mid = start+ (end-start)/ 2;
    if(s[mid].rollNo==targetRoll){
      printf("record found, the location is : ");
      return mid;
    }else if(targetRoll<s[mid].rollNo){
      return recursiveBinary(s,targetRoll,start,mid-1);
    }else{
      return recursiveBinary(s, targetRoll, mid+1, end);
    }
  }
  return -1;
}

void accept(struct student s[10],int n){
  for(int i=0;i<n;i++){
    printf("enter name of the student: ");
    scanf("%s", &s[i].name);
    printf("enter roll number of the student: ");
    scanf("%d", &s[i].rollNo);
    printf("enter marks of the student: ");
    scanf("%d", &s[i].marks);
  }
}

void display(struct student s[10],int n){
  for (int i = 0; i < n;i++){
    printf("name: %s, rollNo: %d, marks: %d\n", s[i].name, s[i].rollNo, s[i].marks);
  }
}

int main(){
  int n, targetRoll;
  struct student s[10];
  printf("how many student do you want(<10): ");
  scanf("%d", &n);

  int start = 0;
  int end = n - 1;

  accept(s, n);
  display(s, n);

  printf("which roll number do you want to target: ");
  scanf("%d", &targetRoll);
 
  int ans1 = recursiveBinary(s, targetRoll, start, end);
  if (ans1 >= 0)
  {
    printf("%d", ans1);
    printf("\nname: %s, rollNo: %d, marks: %d\n", s[ans1].name, s[ans1].rollNo, s[ans1].marks);
    }
  else
  {
    printf("record not found\n");
  }
}