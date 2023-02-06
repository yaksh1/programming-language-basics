#include <stdio.h>

int main()
{
  // declaration
  int a[100], n, i, position, value;
  // size of array
  printf("enter the size of the array: ");
  scanf("%d", &n);
  // elements in array
  printf("enter elements: \n");
  for (i = 0; i < n; i++)
  {
    printf("element %d: ", i + 1);
    scanf("%d", &a[i]);
  }
  // printing original array array
  printf("original array: \n");
  for (i = 0; i < n; i++)
  {
    printf("%d\t", a[i]);
  }

  //----------------------------------------------------------------
  //            logic of reversing half of the array
  //----------------------------------------------------------------

  // reversing half of the array
  for (i = 0; i < n / 4;i++){
    int temp = a[i];
    a[i] = a[n / 2 - i - 1];
    a[n / 2 - i - 1] = temp;
    
  }

    // printing the modified array;
    printf("\nmodified array after reverse: \n");
  for (i = 0; i < n; i++)
  {
    printf("%d\t", a[i]);
  }
}