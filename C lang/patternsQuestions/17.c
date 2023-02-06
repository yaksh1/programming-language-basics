/*
17.      1
        212
       32123
      4321234
       32123
        212
         1
*/

#include <stdio.h>

int main()
{
  int row, col, s, n;

  // input
  printf("enter n: ");
  scanf("%d", &n);

  for (row = 1; row <= 2*n-1; row++)
  {
    if(row<=n){
    for (s = 1; s <= n - row; s++)
    {
      printf(" ");
    }
    for (col = row; col >= 1; col--)//num starting as same as row 21,321,4321
    {
      printf("%d", col);
    }
    for (col = 2; col <= row; col++) // 2,23,234
    {
      printf("%d", col);
    }
    }else{
      for (s = 1; s <= row-n; s++)
      {
        printf(" ");
      }
      for (col = 2*n-row; col >= 1; col--)
      {
        printf("%d", col);
      }
      for (col = 2; col <= 2*n-row; col++)
      {
        printf("%d", col);
      }
    }
    printf("\n");
  }
}