/*
*
** 
*** 
**** 
*** 
**
*
*/
#include <stdio.h>

int main()
{
  int row, col, n;
  printf("enter number n: ");
  scanf("%d", &n);
  for (row = 1; row <= (2*n)-1; row++)
  {
    if(row<=n){ 
      for (col = 1; col <= row;col++){
        printf("*");
      }
    }
    else{
      for (col = 1; col <= (2*n)-row; col++)
      {
        printf("*");
      }
    }
    printf("\n");
  }
}
