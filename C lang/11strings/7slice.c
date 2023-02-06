#include <stdio.h>

void slice(char str[100],int n,int m);

int main(){
  char str[100];
  int n, m;
  //input string
  printf("Enter your string:");
  fgets(str,100,stdin);

  //input starting index
  printf("enter the starting index for slicing: ");
  scanf("%d", &n);
  
  //input ending index
  printf("enter the ending index for slicing: ");
  scanf("%d", &m);

  slice(str,n,m);
}

void slice(char str[100],int n,int m){
  int i;
  for (i = n;i<=m;i++){
    printf("%c",str[i]);
  }
}