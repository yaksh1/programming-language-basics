#include <stdio.h>
#include <limits.h>
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

  //----------------------------------------------------------------
  //            logic of finding second largest element
  //----------------------------------------------------------------

  // finding second largest element
  int l1 = INT_MIN, l2 = INT_MIN;
  for (i = 0; i < n; i++)
  {
    if (a[i] > l1)
    {
      l2 = l1;
      l1 = a[i];
    }
    else if (a[i] < l1)
    {
      l2 = a[i];
    }
  }

  // printing the modified array;
  printf("\nthe second largest number in the array is:%d \n",l2);

}