#include <stdio.h>
#define MAX_SIZE 101
int s[MAX_SIZE];
int top = -1;

void push(int n,int x){
  if(top==n-1){
    printf("nikal bbhadwe");
  }else{
    s[++top] = x;
    }
}

void pop()
{
  if (top == -1) {
    printf("underflow");
  }else{
    int temp = s[top];
    top--;
    printf("%d\n", temp);
  }
}

int main(){
  int n;
  printf("enter n: ");
  scanf("%d", &n);
  push(n,10);
  push(n,2);
  push(n,5);
  push(n,3);
  pop();
  push(n,6);
  for (int i = 0; i < n;i++){
    printf("%d\t", s[i]);
  }
}