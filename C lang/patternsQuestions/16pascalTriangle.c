#include <stdio.h>
#include <math.h>
/*
16.           1
            1   1
          1   2   1
        1   3   3   1
      1   4   6   4   1
*/

int main()
{
  int row, col, s, n, coef = 1;
  // input
  printf("enter n: ");
  scanf("%d", &n);

  // the pattern loop
  for (row = 0; row < n; row++)
  {
    // for spaces
    for (s = 1; s <= n - row+1; s++)
    {
      printf(" ");
    }
    for (col = 0; col <= row; col++)
    {
      if (col == 0|| row == 0)
        coef=1;
      else
        coef = coef * (row - col + 1) / col;

      printf("%d ", coef);
    }
    // new line
    printf("\n");
  }
}