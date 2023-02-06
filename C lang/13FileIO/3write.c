#include <stdio.h>

int main(){
  FILE *fptr = fopen("test.txt", "w");
  //writing in the file
  fprintf(fptr, "%s", "CODING");
  fclose(fptr);

  //reading the file
  fopen("test.txt", "r");
  char ch;
  ch = fgetc(fptr); //gets the first character
  while (ch != EOF)
  {
    printf("%c", ch); //prints the character
    ch = fgetc(fptr); //gets the next character
  }
  printf("\n");
  fclose(fptr);
}