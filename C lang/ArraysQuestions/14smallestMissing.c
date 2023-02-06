#include <stdio.h>
#include <limits.h>
void swap(int a[], int first, int second)
{
  int temp = a[first];
  a[first] = a[second];
  a[second] = temp;
}

int find(int a[], int n)
{
  int i = 0;
  while (i < n)
  {
    int correct = a[i] - 1;
    if (a[i]>0  && a[i] != a[correct])
    {
      swap(a, i, correct);
    }
    else
    {
      i++;
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (a[i] != i + 1)
    {
      return i + 1;
    }
  }
  return n+1;
}

int main()
{
  int a[] = {3,-1,1,2};
  int n = sizeof(a) / sizeof(a[0]);
  int ans = find(a, n);
  printf("%d", ans);
}