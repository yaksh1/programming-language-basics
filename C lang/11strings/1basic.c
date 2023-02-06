#include <stdio.h>

void printString(char arr[]);

int main(){
  //We can initialize the string in two ways
  // char name[] = {'y', 'a', 'k', 's', 'h', '\0'};
  // char college[] = "MITWPU";

  char firstName[] = "yaksh";
  char lastName[] = "gandhi";

  printString(firstName);
  printString(lastName);
}

void printString(char arr[]){
  for (int i = 0;arr[i]!='\0';i++){
    printf("%c",arr[i]);
  }
  printf(" ");
}