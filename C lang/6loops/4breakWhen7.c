#include<stdio.h>

int main(){
  // break when entered multiple of 7
  int n;
  do{
    printf("enter number: ");
    scanf("%d",&n);

    if(n%7==0){
      break;
    }
  } while (1);
}