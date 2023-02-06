#include <stdio.h>

void swap(int a[], int first, int second);

int find(int a[], int n)
{
  int i = 0;
  while(i<n){
     if(a[i]<n&&a[i]!=i){
      swap(a, i,a[i]);
    }else{
      i++;
    }
  }
  for (i = 0; i < n;i++){
    if(a[i]!=i){
      return i;
    }
  }
  return n;
}
void swap(int a[], int first, int second)
{
  int temp = a[first];
  a[first] = a[second];
  a[second] = temp;
}
int main(){
  int a[] = {3,6,4,0,1,2};
  int n = sizeof(a)/sizeof(a[0]);
  int ans = find(a, n);
  printf("%d", ans);
}