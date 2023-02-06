#include <stdio.h>

void add(int a,int b){
  int sum;
  sum = a + b;
  printf("sum is: %d ",sum);
}
int main()
{
  int a, b;
  printf("a: ");
  scanf("%d",&a);
  printf("b: ");
  scanf("%d",&b);
  add(a,b);
  return 0;
}