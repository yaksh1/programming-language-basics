#include <stdio.h>

// convert celsius to fahrenheit
//  f = (c*9/5)+32
float celsiusToFahrenheit(float cel);

int main()
{
  float cel;
  printf("enter the temperature in celsius: ");
  scanf("%f", &cel);
  celsiusToFahrenheit(cel); // convert
  return 0;
}

float celToFahrenheit(float cel)
{
  float f = (cel * 9 / 5) + 32;
  printf("the temperature in fahrenheit is:  %f", f);
}