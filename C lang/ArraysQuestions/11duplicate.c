#include <stdio.h>
void swap(int a[], int first, int second);
int dup(int a[], int n)
{
  int i = 0;
  while (i < n)
  {
    if (a[i] != i + 1)
    {
      int correct = a[i] - 1;
      if (a[i] != a[correct])
      {
        swap(a, i, correct);
      }
      else
      {
        return a[i];
      }
    }
    else
    {
      i++;
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
  int a[] = {1, 2, 2};
  int n = sizeof(a) / sizeof(a[0]);
  int ans = dup(a, n);
}