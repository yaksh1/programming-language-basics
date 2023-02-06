#include <stdio.h>
#include <ctype.h>
char stack[20];
int top = -1;

void push(int x)
{
  stack[++top] = x;
}

int pop()
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

void display()
{
  printf("Stack S:");
  for (int i = 0; i <= top; i++)
  {
    printf(" | %d", stack[i]);
  }
  printf("\n");
}

int calc(int a, int b, char op)
{
  int ans;
  switch (op)
  {
  case '+':
    ans = a + b;
    break;

  case '-':
    ans = a - b;
    break;

  case '*':
    ans = a * b;
    break;

  case '/':
    ans = a / b;
    break;

  case '^':
    ans = pow(a, b);
    break;

  default:
    break;
  }
  return ans;
}

int main(){
  char exp[20];
  char *e, x;
  printf("enter expression: ");
  scanf("%s", exp);
  e = exp;
  int num1, num2, ans;
  while(*e!='\0'){
    if(isdigit(*e)){
      push(*e-'0');
    }else{
      num1 = pop();
      num2 = pop();
      ans = calc(num2, num1, *e);
      push(ans);
    }
    display();
    e++;  
  }
  printf("ans: %d", pop());
}