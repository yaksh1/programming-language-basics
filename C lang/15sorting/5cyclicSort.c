#include <stdio.h>
void swap(int a[], int first, int second);
void cyclic(int a[], int n)
{
  int i = 0;
  while(i<n){
    int correctIndex = a[i] - 1;
    if(a[i]!=a[correctIndex]){
      swap(a, i, correctIndex);
    }else{
      i++;
    }
  }
}
void swap(int a[],int first,int second){
  int temp = a[first];
  a[first]= a[second];
  a[second]= temp;
}

int main(){
  int a[] = {3, 5, 2, 1, 4};
  int n = sizeof(a)/ sizeof(a[0]);
  cyclic(a, n);
  printf("the sorted array is: ");
  for (int i = 0; i < 5;i++){
    printf("%d ", a[i]);
  }
}