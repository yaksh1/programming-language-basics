#include <stdio.h>

/*
    *
   * *
  * * *
   * *
    *
*/
int main(){
  int row, col,spaces, n;
  printf("enter number n: ");
  scanf("%d", &n);
  for(row=1; row<=(2*n)-1; row++){
    int totalColsInRow = row <= n ? row : 2 * n - row;
    int noOfSpaces = n - totalColsInRow;
    for (spaces = 0; spaces < noOfSpaces; spaces++)
    {
      printf(" ");
      }
      for (col = 1; col <= totalColsInRow; col++)
      {
        printf("* ");
      }
      printf("\n");
    }
  }
