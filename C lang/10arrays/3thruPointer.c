#include <stdio.h>

// arrays are pointers

//-----------------------------------------------------
//BOTH ARE SAME
//-----------------------------------------------------

//*ptr = &arr[0];
//*ptr=arr;    


int main(){
  int aadhar[5];

  int *ptr = &aadhar[0];

  //input
  for(int i=0; i<5; i++){
    printf("index %d:", i);
    scanf("%d", (ptr+i));
  }

  //output
  for(int i=0; i<5; i++){
    printf("index %d:%d\n",i,*ptr+i);
  }

  return 0;


}