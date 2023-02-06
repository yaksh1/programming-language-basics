#ifndef CYLINDER_H
#define CYLINDER_H
#include "constants.h"


// forming a class
    class Cylinder
{
  // data members
private:
  double radius{1};
  double height{1};

public:
  // constructors

  // Cylinder(){    // if you dont create a constructor with empty params you have to create a default constructor
  //   radius = 2;  // to create an obj with no params
  //   height = 2;
  // }

  // default constructor
  Cylinder() = default;

  Cylinder(double radius_param, double height_param)
  {
    radius = radius_param;
    height = height_param;
  }

  // method
  double volume()
  {
    return PI * radius * radius * height;
  }

  // setters and getters

  // get radius
  double get_radius()
  {
    return radius;
  }

  // get height
  double get_height()
  {
    return height;
  }

  // set radius
  void set_radius(double radius_param)
  {
    radius = radius_param;
  }

  // set height
  void set_height(double height_param)
  {
    height = height_param;
  }
};

#endif