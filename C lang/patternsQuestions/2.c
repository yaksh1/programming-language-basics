#include <stdio.h>

/*
2.  *
    **
    ***
    ****
    *****
*/

int main(){
  int row, col, n;
  printf("enter number: ");
  scanf("%d", &n);
  for (row = 1; row <= n;row++){
    for (col = 1; col <= row;col++) printf("*");
      printf("\n");
    }
}