#include <stdio.h>

/*
7.   *****
      ****
       ***
        **
         *
*/

int main()
{
  int row, col, n,s;
  printf("enter number: ");
  scanf("%d", &n);
  for (row = 1; row <= n;row++){
    int spaces = row-1;
    for (s = 1;s<=spaces;s++) {
      printf(" ");
    }
      for (col = 1; col <= n - row + 1; col++)
      {
        printf("*");
      }
      printf("\n");
  }
}