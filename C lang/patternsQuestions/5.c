#include <stdio.h>

/*
5.  *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
*/

int main()
{
  int row, col, n;
  printf("enter number: ");
  scanf("%d", &n);
  for (row = 1; row <= 2 * n - 1;row++){
    int colInRow = row <= n ? row : 2 * n - row;
    for (col = 1;col<=colInRow;col++){
      printf("*");
    }
    printf("\n");
  }
}