#include <stdio.h>
#include <string.h>

char stack[20];
int top = -1;
char x;

void push(char x){
  if(top==19){
    printf("stack is full");
  }else{
    stack[++top] = x;
  }
}

char pop(){
  if(top==-1){
    printf("stack underflow");
  }else{
    return stack[top--];
  }
}

void display(){
  for (int i = 0; i < top;i++){
    printf("%c ", stack[i]);
  }
}

int main(){
  char exp[20];
  // char x;
  char *e;
  printf("enter postfix expression: ");
  scanf("%s", exp);
  int i = 0;
  e = exp;
  while(*e!='\0'){
    // x = exp[i];
    if(isalnum(*e)){
      push(*e);
      push(' ');
    }else{
      for (int j = top - 1; j >= 0;j--){
        if(stack[j]==' '){
          stack[j] = *e;
          break;
        }
      }
    }
    e++;
  }
  display();
}