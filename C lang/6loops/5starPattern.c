#include<stdio.h>

int main(){
  /*
  *****
  *****
  *****
  *****
  */
  int row, col,n;
  //this will run number of lines
  for (row = 1; row <= 4;row++){
    //this will run numbers of columns
    for (col = 1; col <= 5;col++){
      printf("*"); //this will print the pattern
    }
    printf("\n");
  }
  return 0;
}