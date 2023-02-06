#include <stdio.h>

/*
6.       *
        **
       ***
      ****
     *****
*/

int main()
{
  int row, col,s, n;
  printf("enter number: ");
  scanf("%d", &n);
  for (row = 1;row<=n;row++){
    int spaces = n - row;// formula for spaces in each row
    for (s = 1; s <= spaces;s++){
      printf(" ");
    }
      for (col = 1; col <= row; col++)
      {
        printf("*");
      }
    printf("\n");
  }
}