#include <stdio.h>

int maximum(int selection[100], int start, int end);
void swap(int selection[100], int first, int second);

int main()
{
  int selection[100], n;
  printf("enter how many numbers you want: ");
  scanf("%d", &n);

  // input
  printf("enter values: \n");
  for (int i = 0; i < n; i++)
  {
    printf("selection[%d]:", i);
    scanf("%d", &selection[i]);
  }
  for (int i = 0; i < n; i++)
  {
    // find max item in the array and swap with the correct index
    int last = n - i - 1;
    int maxIndex = maximum(selection, 0,last);
    swap(selection, maxIndex, last);
  }
  // printing of sorted array
  printf("The sorted array is:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d\n", selection[i]);
  }
}

// function to swap the elements
void swap(int selection[100], int first, int second)
{
  int temp = selection[first];
  selection[first] = selection[second];
  selection[second] = temp;
}

//function to find maximum ele in the array
int maximum(int selection[100], int start,int end)
{
  int i, max = start;
  for (i = start; i <=end; i++)
  {
    if (selection[i] > selection[max])
    {
      max = i;
    }
  }
  return max;
}