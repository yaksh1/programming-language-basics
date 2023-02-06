#include <stdio.h>

void circleArea(float radius);
void squareArea(float side);
void rectangleArea(float length, float breadth);

int main(){
 float radius,side,length,breadth;
 printf("enter the radius of the circle: ");
 scanf(" %f", &radius);
 circleArea(radius);

 printf("enter the side of the square: ");
 scanf(" %f", &side);
 squareArea(side);

 printf("enter the length and breadth of the rectangle: ");
 scanf(" %f%f", &length, &breadth);
 rectangleArea(length,breadth);
}

void circleArea(float radius){
  float area = 3.14 * radius * radius;
  printf("the area of the circle is: %f\n", area);
}

void squareArea(float side)
{
  float area = side*side;
  printf("the area of the square is: %f\n", area);
}

void rectangleArea(float length,float breadth)
{
  float area = length*breadth;
  printf("the area of the rectangle is: %f\n", area);
}
