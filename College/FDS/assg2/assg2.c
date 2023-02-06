//-----------------------------------------------------------------------------
// convert sparse matrix into compact form then do simple and fast transpose
//-----------------------------------------------------------------------------
#include <stdio.h>

void comp(int sparse[10][10], int row, int col, int compact[10][10]);
void sTranspose(int compact[10][10], int st[10][10]);
void FastTranspose(int compact[10][10], int ft[10][10]);

int main()
{
  int row, col, sparse[10][10], compact[10][10], st[10][10], ft[10][10];
  printf("enter the size of the matrix:");
  scanf("%d%d", &row, &col);

  // input of matrix
  printf("enter values of the matrix:\n");
  for (int i = 0; i < row; i++)
  {
    printf("row %d: \n", i + 1);
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &sparse[i][j]);
    }
  }
  // output of matrix
  printf("\n\nthe original matrix is: \n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d\t", sparse[i][j]);
    }
    printf("\n");
  }

  // calling the compact function
  comp(sparse, row, col, compact);
  // calling the simple transpose function
  sTranspose(compact, st);
  // calling the fast transpose function
  FastTranspose(compact, ft);
}

//----------------------------------------------------------------
//                FUNCTION OF COMPACT MATRIX
//----------------------------------------------------------------

void comp(int sparse[10][10], int row, int col, int compact[10][10])
{
  int i, j, k = 1;
  compact[0][0] = row; // first column of compact matrix is row index
  compact[0][1] = col; // second column of compact matrix is column index

  // scanning the original matrix to take values from orig to compact
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      if (sparse[i][j] != 0)
      {
        compact[k][0] = i;            // row of orig in first column of compact matrix
        compact[k][1] = j;            // column of orig in second column of compact matrix
        compact[k][2] = sparse[i][j]; // non zero values in third column of compact matrix
        k++;
      }
    }
  }
  compact[0][2] = k - 1; // total non zero ele

  // printing the compact matrix
  printf("\n\nthe compact matrix is: \n");
  printf("row\tcol\tnon-zero\t\n");
  for (int i = 0; i < k; i++) // total rows now are equal to non zero numbers
  {
    for (int j = 0; j < 3; j++) // column will remain 3
    {
      printf("%d\t", compact[i][j]);
    }
    printf("\n");
  }
}

//----------------------------------------------------------------
//                FUNCTION FOR SIMPLE TRANSPOSE
//----------------------------------------------------------------

void sTranspose(int compact[10][10], int st[10][10])
{
  int i, j;
  int m, n, t;
  int k = 1;         // k is to select the row of st to swap the numbers
  n = compact[0][1]; // n is number of cols in original matrix
  m = compact[0][0]; // m is s number of rows in original matrix
  t = compact[0][2]; // t is number of non zero numbers

  // First row in simple transpose matrix
  st[0][0] = n;
  st[0][1] = m;
  st[0][2] = t;

  // remaining rows
  for (i = 0; i < n; i++) // i is the lowest value of the column of non zero num
  {
    for (j = 1; j <= t; j++)
    { // this will run for the complete compact matrix
      // swap if lowest i arrives
      if (compact[j][1] == i)
      {
        st[k][0] = compact[j][1];
        st[k][1] = compact[j][0];
        st[k][2] = compact[j][2];
        k++;
      }
    }
  }

  // printing the simple transpose matrix
  printf("\n\nthe simple transpose of compact matrix is: \n\n");
  printf("Rows\tColumns\tValues \n");
  for (i = 0; i < k; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", st[i][j]);
    }
    printf("\n");
  }
}

//----------------------------------------------------------------
//                FUNCTION FOR FAST TRANSPOSE
//----------------------------------------------------------------

void FastTranspose(int compact[10][10], int ft[10][10])
{
  int i, j, loc, col_no;
  int m, n, t;
  int k = 1;          // k is to select the row of ft to swap the numbers
  m = compact[0][0]; // m is number of rows in original matrix
  n = compact[0][1]; // n is number of columns in original matrix
  t = compact[0][2]; // t is number of non zero numbers

  int total[n];
  int index[n + 1];
  for (i = 0; i < n; i++) //n+1 time runs
  {
    total[i] = 0;
  }
  for (i = 1; i <= t; i++)// runs t times
  {
    col_no = compact[i][1];
    total[col_no]++;
  }

  index[0] = 1;  //runs 5 time
  for (i = 1; i <= n; i++) //runs n times
  {
    index[i] = index[i - 1] + total[i - 1];
  }

  ft[0][0] = compact[0][1];
  ft[0][1] = compact[0][0];
  ft[0][2] = compact[0][2]; 

  for (i = 1; i <= t; i++) //runs t times
  {
    col_no = compact[i][1];
    loc = index[col_no];
    ft[loc][0] = compact[i][1];
    ft[loc][1] = compact[i][0];
    ft[loc][2] = compact[i][2];
    index[col_no]++;
  }

  // printing the fast transpose matrix
  printf("\n\nthe fast transpose of compact matrix is: \n\n");
  printf("Rows\tColumns\tValues \n");

  for (i = 0; i <= t; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", ft[i][j]);
    }
    printf("\n");
  }
}