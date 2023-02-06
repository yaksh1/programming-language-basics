#include <stdio.h>

/*
    1
   212
  32123
 4321234
  32123
   212
    1
*/
int main()
{
  int row, col, s, n;
  printf("enter number n: ");
  scanf("%d", &n);
  for (row = 1; row <= (2 * n) - 1; row++)
  {
    int c = row <= n ? row : 2 * n - row;
    for (s = 1; s <= n - c; s++)
    {
      printf("  ");
    }

    for (col = c; col >= 1; col--)
    {
      printf("%d ", col);
    }
    for (col = 2; col <= c; col++)
    {
      printf("%d ", col);
    }
    printf("\n");
  }
}
