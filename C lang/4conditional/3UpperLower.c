#include<stdio.h>

int main(){
  //check if entered character is uppercase or lower case
  int ch;

  printf("Enter character: ");
  scanf("%c", &ch);

  if(ch>='A' && ch<='Z'){
    printf("Uppercase character\n");
  }
  else if(ch>='a' && ch<='z'){
    printf("Lowercase character\n");
  }
  else{
    printf("Invalid character\n");
  }
  return 0;
}