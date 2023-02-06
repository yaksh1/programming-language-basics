#include <stdio.h>
void swap(int a[], int first, int second)
{
  int temp = a[first];
  a[first] = a[second];
  a[second] = temp;
}

int find(int a[],int n){
  int i = 0;
  while(i<n){
    int correct = a[i] - 1;
    if(a[i]!=a[correct]){
      swap(a, i, correct);
    }else{
      i++;
    }
  }
  for(int i=0; i<n; i++){
    if(a[i]!=i+1){
      printf("%d %d ", a[i], i + 1);
    }
  }
}


int main(){
  int a[] = {4,5,2,2,1};
  int n = sizeof(a)/sizeof(a[0]);
  find(a, n);
}