#include <stdio.h>
#include <stdlib.h>

 //if you want to initialize the allocation with null value use calloc
int main(){
  float *ptr;
  ptr = (float *)calloc(5,sizeof(float));

  for (int i = 0; i < 5;i++){
    printf("%f\n", ptr[i]);
  }
}