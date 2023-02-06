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

  Cylinder(double radius_param, double height_param);

  // method
  double volume();

  // setters and getters

  // get radius
  double get_radius();

  // get height
  double get_height();

  // set radius
  void set_radius(double radius_param);

  // set height
  void set_height(double height_param);
};

#endif