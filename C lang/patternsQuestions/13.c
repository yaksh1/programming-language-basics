/*
13.      *
        * *
       *   *
      *     *
     *********
*/
#include <stdio.h>

int main()
{
  int row, col, s;
  int n = 5;
  for (row = 1; row <= n; row++)
  {
    for (s = 1; s <= n - row; s++)
    {
      printf(" ");
    }
    for (col = 1; col <= row; col++)
    {
      if (row == 1 || row == 2 || row == 5 || col == 1 || col == row)
      {
        printf("* ");
      }
      else 
      {
        printf("  ");
      }
    }
    printf("\n");
  }
  return 0;
}