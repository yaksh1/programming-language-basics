#include <stdio.h>
#include <time.h>

void swap(int selection[100], int first, int second);
int main()
{
  int insertion[100], n;
  printf("enter how many numbers you want: ");
  scanf("%d", &n);

  // input
  printf("enter values: \n");
  for (int i = 0; i < n; i++)
  {
    printf("insertion[%d]:", i);
    scanf("%d", &insertion[i]);
  }



  // ALGORITHM
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j > 0; j--)
    {
      if (insertion[j] < insertion[j - 1])
      {
        swap(insertion, j, j - 1);
      }
      else
      {
        break;
      }
    }
  }
  printf("the sorted array is:\n");
  for (int i = 0; i < n;i++){
    printf("%d\t", insertion[i]);
  }
}

// function to swap the elements
void swap(int selection[100], int first, int second)
{
  int temp = selection[first];
  selection[first] = selection[second];
  selection[second] = temp;
}
