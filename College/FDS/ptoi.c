#include <stdio.h>

char stack[20];
int top = -1;

void push(char x)
{
  stack[++top] = x;
}

char pop()
{
  if (top == -1)
  {
    return -1;
  }
  else
  {
    return stack[top--];
  }
}

int priority(char x)
{
  if (x == '(')
  {
    return 0;
  }
  if (x == '+' || x == '-')
  {
    return 1;
  }
  if (x == '*' || x == '/')
  {
    return 2;
  }
}

void display(){
  for (int i = 0; i < top;i++){
    printf("%c", stack[i]);
  }
}

int main(){
  char exp[20];
  char *e, x;
  printf("enter expression: ");
  scanf("%s", exp);
  e = exp;
  while(*e!='\0'){
    if(isalnum(*e)){
      push(*e);
      push(' ');
    }else{
      for (int j = top - 1; j >= 0;j++){
        if(stack[j]==' '){
          stack[j] = *e;
        }
      }
    }
  }
}
