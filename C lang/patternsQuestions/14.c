#include <stdio.h>
/*
14.  *********
      *     *
       *   *
        * *
         *
*/

int main(){
  int row, col,s,n;

  //input
  printf("enter n: ");
  scanf("%d", &n);

  //the pattern loop
  for (row = 1; row <= n;row++){
    // for spaces
    for (s = 1; s <= row - 1;s++){ 
      printf(" ");
    }
      for (col = 1; col <= n - row + 1; col++)
      {
        // condition when to print *
        if (row == 1||col == 1||col==n-row+1){ 
          printf("* ");
        }else{
          // for hollow spaces
          printf("  "); 
        }
      }
      // new line
      printf("\n");
  }
}