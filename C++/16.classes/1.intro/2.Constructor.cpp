#include <iostream>
using namespace std;

const double PI{3.14};

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

  Cylinder(double radius_param, double height_param){
    radius = radius_param;
    height = height_param;
  }

  //method
  double volume()
  {
    return PI * radius * radius * height;
  }

  // setters and getters

  // get radius
  double get_radius(){
    return radius;
  }

  // get height
  double get_height()
  {
    return height;
  }

  // set radius
  void set_radius(double radius_param){
    radius = radius_param;
  }

  // set height
  void set_height(double height_param)
  {
    height = height_param;
  }
};

int main()
{
  Cylinder cy1; // this will call the constructor that doesn't take any parameter
  cout << "volume cy1: " << cy1.volume() << endl;

  Cylinder cy2(10, 4); // calling the constructor that takes parameter
  cout << "volume cy2: " << cy2.volume() << endl;

  // setting the height for cy2 as 5
  cy2.set_height(5); 
  cout << "volume cy2: " << cy2.volume() << endl;
  cout << "radius cy2: " << cy2.get_radius() << endl;
  cout << "height cy2: " << cy2.get_height() << endl;

  return 0;
}