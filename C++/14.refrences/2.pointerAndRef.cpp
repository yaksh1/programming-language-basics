#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  // Declaring pointer and references
  double double_value{3.8};
  double &double_ref{double_value};      // Reference to doubleValue
  double *double_pointer{&double_value}; // Pointer to doubleValue

  // Reading pointer and references
  cout << "double_value: " << double_value << endl;
  cout << "double_ref: " << double_ref << endl;
  cout << "double_pointer: " << double_pointer << endl;
  cout << "*double_pointer: " << *double_pointer << endl;

  cout << "========================================" << endl;

  // Writing through pointer
  *double_pointer = 14.2;
  cout << "double_value: " << double_value << endl;
  cout << "double_ref: " << double_ref << endl;
  cout << "double_pointer: " << double_pointer << endl;
  cout << "*double_pointer: " << *double_pointer << endl;

  cout << "========================================" << endl;

  // Writing through Reference
  double_ref = 12.5;
  cout << "double_value: " << double_value << endl;
  cout << "double_ref: " << double_ref << endl;
  cout << "double_pointer: " << double_pointer << endl;
  cout << "*double_pointer: " << *double_pointer << endl;

  cout << "========================================" << endl;

  // Making reference reference something else
  double some_other_double_value{10.34};
  double_ref = some_other_double_value;
  cout << "double_value: " << double_value << endl;     //-----------------------------------------------------
  cout << "double_ref: " << double_ref << endl;         // IT WILL STILL REFERENCE TO THE OLD VARIABLE
  cout << "double_pointer: " << double_pointer << endl; //-----------------------------------------------------
  cout << "*double_pointer: " << *double_pointer << endl;

  cout << "========================================" << endl;

  // Making pointer reference something else
  double_pointer = &some_other_double_value;
  cout << "double_value: " << double_value << endl;     //-----------------------------------------------------
  cout << "double_ref: " << double_ref << endl;         // POINTER WILL ADDRESS TO THE NEW VARIABLE
  cout << "double_pointer: " << double_pointer << endl; //-----------------------------------------------------
  cout << "*double_pointer: " << *double_pointer << endl;

  cout << "========================================" << endl;

  // Changing pointer value
  *double_pointer = 69.420;
  cout << "double_value: " << double_value << endl; 
  cout << "double_ref: " << double_ref << endl;
  cout << "&double_value: " << &double_value << endl;
  cout << "&double_ref: " << &double_ref << endl;
  cout << "double_pointer: " << double_pointer << endl;
  cout << "*double_pointer: " << *double_pointer << endl;
  return 0;
}