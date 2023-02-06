#include <Stdio.h>

void countLength(char arr[]);

int main()
{
  char arr[100];
  printf("enter your name: ");
  fgets(arr, 100, stdin);
  countLength(arr);
  return 0;
}

void countLength(char arr[]){
  int i;
  for (i = 0; arr[i] != '\0'; i++)
  {
  }
  printf("\n%d", i-1);
}