#include <stdio.h>
int agnostic(int a[],int target,int n){
  int start = 0;
  int end = n;
  if(a[0]<a[n-1]){
    while(start<=end){
      int mid = start + (end - start) / 2;
      if(target<a[mid]){
        end = mid - 1;
      }else if(target>a[mid]){
        start = mid + 1;
      }else{
        return mid;
      }
    }
  }else{
    while(start<=end){
      int mid = start + (end - start) / 2;
      if(target<a[mid]){
        start = mid + 1;
      }else if(target>a[mid]){
        end = mid - 1;
      }else{
        return mid;
      }
    }
  }
  return -1;
}
int main(){

  int a[] = {-19,-13,-5,0,1, 4, 7, 9, 12, 14, 19, 25, 29, 38, 40};
  int n = sizeof(a) / sizeof(a[0]);
  int target = 25;

  int ans = agnostic(a, target,n);
  printf("%d", ans);
}