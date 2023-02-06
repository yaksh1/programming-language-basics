#include <stdio.h>

/*
12.  * * * * *
      * * * *
       * * *
        * *
         *
         *
        * *
       * * *
      * * * *
     * * * * *
*/

int main()
{
  int row, col, s,n;
  printf("enter number: ");
  scanf("%d", &n);
  for (row = 1; row <= 2 * n;row++){
    int colInRow = row <= n ? n - row + 1 : row - n;
    int spaces = n-colInRow ;
    for (s = 1;s<=spaces;s++) printf(" ");
      for (col = 1; col <= colInRow; col++)
      {
        printf("* ");
      }
    printf("\n");
  }
}