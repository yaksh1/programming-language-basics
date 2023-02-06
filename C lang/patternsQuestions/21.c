/*
21.    1
       2  3
       4  5  6
       7  8  9  10
       11 12 13 14 15
*/

#include <stdio.h>

int main()
{
  int row, col, s, n;

  // input
  printf("enter n: ");
  scanf("%d", &n);
  int z = 1;
  for (row = 1; row <= n;row++){
    for (col = 1; col <= row;col++){
      printf("%d ", z);
      z++;
    }
    printf("\n");
  }
}