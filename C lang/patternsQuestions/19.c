/*
19.    *        *
       **      **
       ***    ***
       ****  ****
       **********
       ****  ****
       ***    ***
       **      **
       *        *
*/

#include <stdio.h>

int main()
{
  int row, col, s, n;

  // input
  printf("enter n: ");
  scanf("%d", &n);

  for (row = 1; row <= 2 * n - 1; row++)
  {
    if (row <= n)
    {
      for (col = 1; col <= 2 * n; col++)
      {
        if (col > row && col <(2 * n) - row + 1)
        {
          printf(" ");
        }else{
          printf("*");
        }
      }
    }else{
      for (col = 1;col<=2 * n; col++){
        if(col>2*n-row&&col<row+1){
          printf(" ");
        }else{
          printf("*");
        }
      }
    }
    printf("\n");
  }
}