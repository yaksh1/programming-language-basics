#include <stdio.h>
int linearSearch(int a[],int target,int n){
  for (int i = 0; i < n;i++){
    if(a[i]==target){
      return i;
    }
  }
  return -1;
}
int main(){
  int a[] = {1, 2, 5, 8, 9, 12, 45, 78};
  int n = sizeof(a)/ sizeof(a[0]);
  int target = 9;

  int ans = linearSearch(a, target, n);
  printf("%d\n", ans);
}