#include <stdio.h>

/*
11.  * * * * *
      * * * *
       * * *
        * *
         *
*/

int main()
{
  int row, col, n;
  printf("enter number: ");
  scanf("%d", &n);
  for (row = 1;row<=n;row++){
    for (int s = 1; s <= row - 1;s++)
      printf(" ");
      for (col = 1; col <= n - row + 1; col++)
      {
        printf("* ");
      }
    printf("\n");
  }
}