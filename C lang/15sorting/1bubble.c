#include <stdio.h>

int main()
{
  int bubble[100], n;
  printf("how many numbers you want to input: ");
  scanf("%d", &n);
  // input
  printf("enter values \n");
  for (int i = 0; i < n; i++)
  {
    printf("number %d: ", i);
    scanf("%d", &bubble[i]);
  }

  //----------------------------------------------------------------
  //                    bubble sorting algorithm
  //----------------------------------------------------------------

  //run the steps n-1 times
  for (int i = 0; i < n; i++)
  {
    //for each step,max num will come at last respective index
    for (int j = 1; j < n - i; j++)
    {
      //swap if item is smaller than the previous item
      if (bubble[j] < bubble[j - 1]) // for descending put j+1 instead of j-1
      {
        //swap
        int temp = bubble[j];
        bubble[j] = bubble[j - 1];
        bubble[j - 1] = temp;
      }
    }
  }

  // printing of sorted array
  printf("The sorted array is:\n");
  for (int i = 0; i <n; i++)
  {
    printf("%d\n", bubble[i]);
  }
}