#include <stdio.h>

int arr(int index, int a[6],int n);

int main()
{
  int arr1[100];
  int n, i;
  printf("\n\n Recursion : Print the array elements :\n");
  printf("-------------------------------------------\n");

  printf(" Input the number of elements to be stored in the array :");
  scanf("%d", &n);

  
  printf("write elements in array are:");
  for (int i = 0; i < n;i++){
    printf(" element - %d : ", i);
    scanf("%d",&arr1[i]);
  }

  printf(" The elements in the array are : ");
  arr(0,arr1,n); // call the function arr



}

int arr(int index, int arr1[],int n){
  if(index>=n){
    return ;
  }
  printf("%d ", arr1[index]);
  arr(index + 1, arr1,n);
}