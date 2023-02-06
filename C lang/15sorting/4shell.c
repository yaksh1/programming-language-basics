/*
 * C Program to sort an array using Shell Sort technique
 */
#include <stdio.h>
int swap(int arr[], int first, int second);
void shell(int arr[], int num)
{
  int gap, j, i;
  for (gap = num / 2; gap > 0; gap = gap / 2)
  {
    for (j = gap; j < num; j++)
    {
      for (i = j - gap; i >= 0; i = i - gap)
      {
        if (arr[j] >= arr[i])
          break;
        else
        {
          swap(arr, i, j);
        }
      }
    }
  }
}
int swap(int arr[],int first,int second){
  int tmp = arr[first];
  arr[first] = arr[second];
  arr[second] = tmp;
}
int main()
{
  int arr[100];
  int i, num;
  printf("Enter total no. of elements : ");
  scanf("%d", &num);
  printf("\nEnter %d numbers: ", num);

  for (i = 0; i < num; i++)
  {
    scanf("%d", &arr[i]);
  }
  shell(arr, num);
  printf("\nSorted array is: ");
  for (i = 0; i < num; i++)
    printf("%d ", arr[i]);
  return 0;
}