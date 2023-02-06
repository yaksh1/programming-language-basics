#include <iostream>
using namespace std;

int main(int argc, char** argv){
  int age{23};
  const int& ref_age{age};

  cout<<"age: "<<age<<endl;
  cout << "ref_age: " << ref_age << endl;

  //----------------------------------------------
  // Modifying ref age
  // ref_age++; //error
  //----------------------------------------------

  //Simulating same behaviour with pointers
  const int *const pointer_age{&age};
  //*pointer_age++; //error
  return 0;
}