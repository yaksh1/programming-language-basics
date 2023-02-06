#include <stdio.h>

int main()
{
  // declaration
  int a[100], n, i, position, value;

  //input of the number
  printf("enter a number to convert it into binary: ");
  scanf("%d", &n);

  //----------------------------------------------------------------
  //                  logic of decimal to binary
  //----------------------------------------------------------------

  // decimal to binary
  for (i = 0; n != 0;i++){
    int r = n % 2;
    n = n / 2;
    a[i] = r;
  }
    // printing the modified array;
  printf("\nmodified array after reverse: \n");
  for (i = i - 1; i >= 0; i--)
  {
    printf("%d\t", a[i]);
  }
}