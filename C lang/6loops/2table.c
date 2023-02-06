#include<stdio.h>

int main(){
  //print table of the number given  by the user
  int n, i, j=1;
  printf("enter the number: ");
  scanf("%d", &n);
  for (i = 1; i <= 102;i++){
    j = n * i;
    printf("%d\n", j);
  }
}