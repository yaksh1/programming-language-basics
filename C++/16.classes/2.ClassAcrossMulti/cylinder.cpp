#include "cylinder.h"

// declaring class so that compiler understands from which header file we are calling function
Cylinder::Cylinder(double radius_param, double height_param)
{
  radius = radius_param;
  height = height_param;
}

double Cylinder::volume()
{
  return PI * radius * radius * height;
}

double Cylinder::get_radius()
{
  return radius;
}

// get height
double Cylinder::get_height()
{
  return height;
}

// set radius
void Cylinder::set_radius(double radius_param)
{
  radius = radius_param;
}

// set height
void Cylinder::set_height(double height_param)
{
  height = height_param;
}
