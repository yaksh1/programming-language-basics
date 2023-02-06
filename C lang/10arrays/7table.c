#include <stdio.h>

// write table of 2 and 3 in an 2D array
int main(){
  int a[2][10];
  for (int i = 0; i <2;i++){
    for (int j = 1; j <= 10;j++){
      a[i][j] = (i + 2) * j;
      printf("%d\t ",a[i][j]);
    }
    printf("\n");
  }
    return 0;
}

