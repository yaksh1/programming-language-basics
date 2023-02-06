/*
18.   **********
      ****  ****
      ***    ***
      **      **
      *        *
      *        *
      **      **
      ***    ***
      ****  ****
      **********
*/

#include <stdio.h>

int main()
{
  int row, col, s, n;

  // input
  printf("enter n: ");
  scanf("%d", &n);

  for (row = 1; row <= 2 * n; row++)
  {
    if (row <= n)
    {
      for (col = 1; col <=  2*n; col++)
      {
        if (col == 1 || row == 1 || col==2*n|| col <= n - row + 1/*upper left tri*/||col>row+n-1/*upper right tri*/)
        {
          printf("*");
        }
        else
        {
          printf(" ");
        }
      }
    }else{
      for (col = 1; col <= 2*n; col++)
      {
        if (col == 1 || row == 2*n || col == 2*n || col<=row-n/*bottom left triangle*/|| col>=2*n-row+6/*bottom right triangle*/)
        {
          printf("*");
        }
        else
        {
          printf(" ");
        }
      }
    }
    printf("\n");
  }
}