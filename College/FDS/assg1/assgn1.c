#include <stdio.h>

int main()
{
  int a[10][10], b[10][10], c[10][10], row, col, ch;
  int I = 1;

  printf("Select the number of rows and col: ");
  scanf("%d%d", &row, &col);
  accept(a, row, col);
  display(a, row, col);
  accept(b, row, col);
  display(b, row, col);
  do{
    printf("PRESS 1 for addition,PRESS 2 for subtraction,PRESS 3 for multiplication, PRESS 4 for transpose,PRESS 5 for diagonal addition \n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      add(a, b, c, row, col);
      display(c, row, col);
      break;
    case 2:
      subtract(a, b, c, row, col);
      display(c, row, col);
      break;
    case 3:
      multiply(a, b, c, row, col);
      display(c, row, col);
      break;
    case 4:
      transpose(a, c, row, col);
      display(c, row, col);
      break;
    case 5:
      diagonalAdd(a, c, row, col);
      break;
    default:
      printf("\n wrong choice");
   }
   printf("press 1 to continue and 0 to quit: ");
   scanf("%d", &I);
  } while (I != 0);
}

void accept(int a[10][10], int row, int col)
{
  int i, j;
  printf("enter value of the matrix: ");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
}

void display(int a[10][10], int row, int col)
{
  int i, j;
  printf("the matrix is: \n");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
}

void add(int a[10][10], int b[10][10], int c[10][10], int row, int col)
{
  int i, j;
  printf("The addition of the matrix is: \n");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      c[i][j] = a[i][j] + b[i][j];
    }
  }
}

void subtract(int a[10][10], int b[10][10], int c[10][10], int row, int col)
{
  int i, j;
  printf("The subtraction of the matrix is: \n");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      c[i][j] = a[i][j] - b[i][j];
    }
  }
}

void multiply(int a[10][10], int b[10][10], int c[10][10], int row, int col)
{
  int i, j, k; //
  printf("The multiplication of the matrix is: \n");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      c[i][j] = 0;
      for (k = 0; k < col; k++)
      {
        c[i][j] = c[i][j] + a[i][k] * b[k][j];
      }
    }
  }
  //? time complexity = m*n*k
}

void transpose(int a[10][10],int c[10][10],int row,int col){
  int i, j;
  printf("The transpose of the matrix is: ");
  for (i = 0; i < row;i++){
    for (j = 0; j < col;j++){
      c[i][j] = a[j][i];
    }
  }
}

void diagonalAdd(int a[10][10],int c[10][10],int row,int col){
  int i, j,sum=0;
  for (i = 0; i < row;i++){
    for (j = 0; j < row;j++)
    {
      if(i==j)
      {
        sum = sum + a[i][j];
      }
    }
  }
  printf("the diagonal addition of the matrix is: %d\n", sum);
}
