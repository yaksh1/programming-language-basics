#include<stdio.h>

int main(){
  //declaration
  int a[100], n, i, position,value;
  //size of array
  printf("enter the size of the array: ");
  scanf("%d", &n);
  //elements in array
  printf("enter elements: \n");
  for (i = 0; i < n;i++){
    printf("element %d: ", i + 1);
    scanf("%d", &a[i]);
  }
  //printing original array array
  printf("original array: \n");
  for (i = 0; i < n; i++)
  {
    printf("%d\t",a[i]);
  }
  //entering the location
  printf("\nenter the location where you want to insert: ");
  scanf("%d", &position);
  //entering the element to be inserted
  printf("enter the number you want to insert: ");
  scanf("%d", &value);

  //----------------------------------------------------------------
  //                  logic of insertion
  //----------------------------------------------------------------
  
  //move each element from i  to i+1 index
  for (i = position-1; i < n + 1;i++){
    a[i + 1] = a[i];
  }

  a[position - 1] = value;

  // printing the modified array;
  printf("modified array: \n");
  for (i = 0; i < n; i++)
  {
    printf("%d\t", a[i]);
  }
}