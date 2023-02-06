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
  // entering the location
  printf("\nenter the location where you want to delete: ");
  scanf("%d", &position);
  // // entering the element to be deleted
  // printf("enter the number you want to delete: ");
  // scanf("%d", &value);

  //----------------------------------------------------------------
  //                  logic of deletion
  //----------------------------------------------------------------

  //moving element at i to i-1 index
  for (i = position; i < n;i++){
    a[i - 1] = a[i];
  }

  // printing the modified array;
  printf("modified array: \n");
  for (i = 0; i < n-1; i++)
  {
    printf("%d\t", a[i]);
  }
}