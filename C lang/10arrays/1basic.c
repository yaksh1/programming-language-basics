#include <stdio.h>

// syntax of arrays
int main(){
  int arr[3];

  printf("enter the physics marks: ");
  scanf("%d", &arr[0]);

  printf("enter the maths marks: ");
  scanf("%d", &arr[1]);

  printf("enter the science marks: ");
  scanf("%d", &arr[2]);

  printf("physics: %d, maths: %d ,science: %d\n", arr[0], arr[1], arr[2] );
}