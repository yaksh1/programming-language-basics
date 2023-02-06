#include <stdio.h>

//reverse an array

void reverse(int arr[], int n);

int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10};

  for (int i = 0; i < 10;i++){
    printf("%d\t", arr[i]);
  }
  printf("\n");
  reverse(arr, 10);

  return 0;
}

void reverse(int arr[], int n){

  for (int i = 0; i < n/2; i++)
  {
    int firstValue = arr[i];
    int newValue = arr[n - i - 1];
    arr[i] = newValue;
    arr[n-i-1] = firstValue; 
  }
  for (int i = 0; i < n;i++){
    printf("%d\t ", arr[i]);
  }
}
