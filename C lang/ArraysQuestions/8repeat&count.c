#include <stdio.h>
#include <limits.h>
int main()
{
  // declaration
  int a[100], n, i, count;
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
  //            logic of counting repeating elements
  //----------------------------------------------------------------

  // count the repeated elements
  for (i = 0; i < n - 1;i++){
    count = 1;
    for (int j = 0; j < n;j++){
      if(a[j]==0){
        continue;
      }
      if(a[j]==a[i]){
        count++;
        a[j] = 0;
      }
    }
  }
}