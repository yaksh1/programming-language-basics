#include <stdio.h>

//write a function to count odd numbers in array
void countOdd(int arr[], int n);

int main(){
  int arr[100], n;
  printf("enter the size of the array: ");
  scanf("%d", &n);
  
  //input
  for(int i=0; i<n; i++){
    printf("index %d:", i);
    scanf("%d", &arr[i]);
  }

  //output
  for (int i = 0; i < n;i++){
    printf("index %d: %d\n", i, arr[i]);
  }

  countOdd(arr, n);

  return 0;

}

void countOdd(int arr[], int n) {
  int count = 0;
  for (int i = 0; i < n;i++){
    if(arr[i]%2!=0){
      count++;
    }
  }
  printf("\ntotal odd numbers in the array are: %d\n",count);
}
