#include <iostream>
#include "constants.h"
#include "cylinder.h"
using namespace std;




int main()
{
  // Stack object 
  Cylinder c1(10,10); // this will call the constructor that doesn't take any parameter
  cout << "volume c1: " << c1.volume() << endl;

  // Managing a stack object through pointers
  Cylinder *p_c1 = &c1;
  // cout << "volume p_c1: " << p_c1.volume() << endl; // this will give error as we have to first dereference the pointer to perform a function
  cout << "volume p_c1: " << (*p_c1).volume() << endl;
  cout << "volume p_c1: " << p_c1->volume() << endl;

  // Heap object
  Cylinder *p_c2 = new Cylinder(3, 4);//create object on heap
  cout << "volume p_c2: " << (*p_c2).volume() << endl;
  cout << "volume p_c2: " << p_c2->volume() << endl;

  delete p_c2; // remember to free the space
  return 0;
}