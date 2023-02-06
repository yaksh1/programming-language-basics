/*
22.    1
       0 1
       1 0 1
       0 1 0 1
       1 0 1 0 1
*/

#include <stdio.h>

int main()
{
  int row, col, s, n;

  // input
  printf("enter n: ");
  scanf("%d", &n);

  for (row = 1; row <= n; row++)
  {
    for (col = row; col >=1; col--)
    {
      printf("%d", col % 2);
    }
    printf("\n");
  }
}