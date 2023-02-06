#include <stdio.h>


int main(){
  int age = 19;
  int *ptr = &age;
  printf("ptr:%u", ptr);
  ptr++; // ptr++ means memory location will increase by no. of bytes of the data type
  printf("ptr:%u", ptr);
  ptr--;
  printf("ptr:%u", ptr);

  //----------------------------------------------------
  // Difference between two pointers
  //----------------------------------------------------

  int price = 200;
  int *ptrr = &price;
  int _price = 201;
  int *_ptrr = &_price;

  printf("\n\n%u,%u \ndifference between pointers: %u", ptrr, _ptrr,ptrr-_ptrr); 
  
  //diff will show 1 because int has increased by 1 value which is equivalent to 4 bytes

  //----------------------------------------------------
  // comparison between two pointers
  //----------------------------------------------------
  printf("\ncomparison between pointers: %u", ptrr == _ptrr);
}   