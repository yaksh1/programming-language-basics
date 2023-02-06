#include <iostream>
using namespace std;

const double PI{3.14};

// forming a class
class Cylinder
{
  // data members
private:
  double radius{2.4};
  double height{3};

// functions (methods)
public:
  double volume()
  {
    return PI * radius * radius * height;
  }
};

int main()
{
  Cylinder cy1; //object
  cout << "volume cy1: "<<cy1.volume() << endl;

  //changing the data members !!!risky therefore keep members as private
  // cy1.radius = 1;
  // cy1.height = 4;
  // cout << " new volume cy1: " << cy1.volume() << endl;

  Cylinder cy2;
  cout << "volume cy2: " << cy1.volume() << endl;

  return 0;
}