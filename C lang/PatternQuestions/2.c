/*
*
** 
*** 
****
*/

#include<stdio.h>

int main()
{
  int row, col, n;
  printf("enter number of rows: ");
  scanf("%d", &n);
  for (row = 1; row <= n; row++)
  {
    for (col = 1; col <= row; col++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}