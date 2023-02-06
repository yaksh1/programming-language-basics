#include <stdio.h>

/*
10.      *
        * *
       * * *
      * * * *
     * * * * *
*/

int main()
{
  int row, col,s, n;
  printf("enter number: ");
  scanf("%d", &n);
  for (row = 1; row <= n;row++){
    for (s = 1; s <= n - row;s++){
      printf(" ");
    }
      for (col = 1; col <= row; col++)
      {
        printf("* ");
      }
    printf("\n");
  }
}