#include<stdio.h>

int main(){
  int n, i;
  // for (i = 0; i >= 0;i++){
  //   if(n%2 != 0){
  //     break;
  //   }
  //   printf("enter number: ");
  //   scanf("%d",&n);
  // }

  while(n%2==0){
    printf("enter number: ");
    scanf("%d", &n);
  }
}