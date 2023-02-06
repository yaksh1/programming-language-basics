#include <stdio.h>
void max(int a[], int n);
int main(){
  int a[] = {2, 4, 56, 100, 8, 9};
  int n = sizeof(a) / sizeof(a[0]);

  max(a, n);
}

void max(int a[], int n){
  int maxi = 0;
  for (int i = 0; i < n;i++){
    if(a[i]>maxi){
      maxi = a[i];
    }
  }
  printf("%d", maxi);
}
