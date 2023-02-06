#include <stdio.h>

/*
    1
   212
  32123
 4321234
*/
int main()
{
  int row, col, s, n;
  printf("enter number n: ");
  scanf("%d", &n);
  for (row = 1; row <= n; row++)
  {
    for (s = 1; s <= n - row;s++){
      printf("  ");
    }
      for (col = row; col >= 1; col--)
      {
        printf("%d ", col);
      }
    for (col = 2; col <= row; col++)
    {
      printf("%d ", col);
    }
    printf("\n");
  }
}