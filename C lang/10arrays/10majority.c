#include <stdio.h>

int majority(int arr[],int n);
int main(){
  int arr[]={1,2,2,2,1,2,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  printf("the majority num is: %d",majority(arr,n));
}

int majority(int arr[],int n){
  int majority = arr[0];
  int count = 1;

  for (int i = 0; i < n;i++){
    if(arr[i]==majority){
      count++;
    }else{
      count--;
      if(count==0){
        majority = arr[i];
        count = 1;
      }
    }
  }
  return majority;
}