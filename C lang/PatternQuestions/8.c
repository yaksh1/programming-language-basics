#include <stdio.h>
#define min(i, j) (((i) < (j)) ? (i) : (j))
#define max(i, j) (((i) > (j)) ? (i) : (j))

/*
     33333
     32223
     32123
     32223
     33333
*/

int main(){
  int row, col, s, n;
  printf("enter the number n: ");
  scanf("%d", &n);
  for (row = 1; row <= 2*n-1 ;row++){
    for(col = 1; col <= 2*n-1 ;col++){
      int atEveryIndex =  n-min(min(row,col),min(2*n-row,2*n-col))+1;
      printf("%d ", atEveryIndex);
    }
    printf("\n");
  }
    return 0;
}