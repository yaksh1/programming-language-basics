#include <iostream>
#include "constants.h" // we used #ifndef to remove the error of declaring constants twice by importing cylinder.h file
#include "cylinder.h"
using namespace std;

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