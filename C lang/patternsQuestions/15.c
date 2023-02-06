#include <stdio.h>
/*
15.      *
        * *
       *   *
      *     *
     *       *
      *     *
       *   *
        * *
         *
*/

int main()
{
  int row, col, s, n;

  // input
  printf("enter n: ");
  scanf("%d", &n);

  // the pattern loop
  for (row = 1; row <= 2*n-1; row++)
  {
    int colInRow = row <= n ? row : (2 * n) - row;
    for (s = 1; s <= n-colInRow; s++)
    { // for spaces
      printf(" ");
    }
    for (col = 1; col <= colInRow; col++)
    {
      if(col==1||col==colInRow){
      printf("* ");
      }else{
        printf("  ");
      }
    }
    printf("\n"); // new line
  }
}