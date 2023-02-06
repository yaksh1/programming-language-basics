#include <stdio.h>

/*
9.  *********
     *******
      *****
       ***
        *
*/

int main()
{
  int row, col, s,n;
  printf("enter number: ");
  scanf("%d", &n);
  for (row = 1;row<=n;row++){
    int spaces = row - 1;
    for (s = 1;s<=spaces;s++) printf(" ");
      for (col = 1; col <= 2 * n - (2 * row - 1); col++)
      {
        printf("*");
      }
      printf("\n");
  }
}