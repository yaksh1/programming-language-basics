#include <stdio.h>

//print the item price with gst

void calcGst(float price);

int main(){
  float price;
  printf("enter the price of the item: ");
  scanf("%f", &price);
  calcGst(price);
}

void calcGst(float price){
  price = price + (0.18 * price);
  printf("the final price of the product is: %f", price);
}