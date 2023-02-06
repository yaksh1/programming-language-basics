#include<stdio.h>

//print hello world n times using recursion
void printHW(int count);

int main(){
  int n;
  printf("choose number: ");
  scanf("%d", &n);
  printHW(n);
  return 0;
}

void printHW(int count){
  if(count==0){
    return;
  }
  printf("hello world\n");
  printHW(count - 1);
}
 
