//print odd and ven numbers separately
#include <stdio.h>
int main(){
  int a[100],b[100],c[100],n,i,j=0,k=0;
  //size of array
  printf("how many number do you want to input: ");
  scanf("%d", &n);
  //taking input 
  for (i = 0; i < n;i++){
    printf("a[%d]: ", i);
    scanf("%d", &a[i]);
  }

  //----------------------------------------------------------------
  //           logic of printing odd even separately
  //----------------------------------------------------------------

  //separating the even and odd numbers
  for (i = 0; i < n;i++){
    if(a[i]%2==0){
      b[j] = a[i];
      j++;
    }else{ 
      c[k]=a[i];
      k++;
    }
  }
  //printing even number array
  printf("the even numbers are: ");
  for (i = 0; i < j;i++){
    printf("%d ", b[i]);
  }
  //printing odd number array
  printf("\nthe odd numbers are: ");
  for (i = 0; i < k; i++)
  {
    printf("%d ", c[i]);
  }
}
