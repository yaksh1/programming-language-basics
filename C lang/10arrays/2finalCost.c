#include <stdio.h>

// write a program to enter price of 3 items and print their final cost with gst
int main(){
  float price[3];
  printf("enter the price of item 1: ");
  scanf("%f", &price[0]);

  printf("enter the price of item 2: ");
  scanf("%f", &price[1]);

  printf("enter the price of item 3: ");
  scanf("%f", &price[2]);

  printf("item 1: %f, item 2: %f,item 3: %f",0.18*price[0]+price[0], 0.18*price[1]+price[1], 0.18*price[2]+price[2]);
}

//----------------------------------------------------------------
// INITIALISATION
//----------------------------------------------------------------

/*
int price[]={1,2,3,4,5,6,7}
int price[7]={1,2,3,4,5,6,7}
*/