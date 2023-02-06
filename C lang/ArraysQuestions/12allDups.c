#include <stdio.h>
#include <stdio.h>
void swap(int a[], int first, int second);
int dup(int a[], int n)
{
  int i = 0;
  while (i < n)
  {
    int correct = a[i] - 1;
    if (a[i] != a[correct])
    {
      swap(a, i, correct);
    }
    else
    {
      i++;
    }
  }
  for (i = 0; i < n; i++)
  {
    if (a[i] != i + 1)
    {
      printf("%d ", a[i]);
    }
  }
}
void swap(int a[], int first, int second)
{
  int temp = a[first];
  a[first] = a[second];
  a[second] = temp;
}
int main()
{
  int a[] = {1,3,4,2,2};
  int n = sizeof(a) / sizeof(a[0]);
  int ans = dup(a, n);
}