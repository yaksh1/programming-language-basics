#include <iostream>
using namespace std;

int main()
{
  /*
  //Declare and initialize pointer
  int* p_number {}; // Will initialize with nullptr
  double*  p_fractional_number{};

  int *p_number5{}, other_int_var{};
  	// Confusing as you wonder if other_int_var6
    //is also a pointer to int. It is not
    // The structure is exactly the same for the
    //previous statement
*/


  // Initializing pointers and assigning them data
  // We know that pointers store addresses of variables
  int int_var{43};
  int *p_int{&int_var}; // The address of operator (&);

  std::cout << "Int var : " << int_var << std::endl;
  std::cout << "p_int (Address in memory)  : " << p_int << std::endl;

  // You can also change the address stored in a pointer any time
  int int_var1{65};
  p_int = &int_var1; // Assign a different address to the pointer
  std::cout << "p_int (with different address)  : " << p_int << std::endl;

  // Can't cross assign between pointers of different types
  int *p_int1{nullptr};
  double double_var{33};

  // p_int = &double_var; // Compiler error

  // Dereferencing a pointer :
  int *p_int2{nullptr};
  int int_data{56};
  p_int2 = &int_data;

  std::cout << "value : " << *p_int2 << std::endl; // Dereferencing a pointer

  return 0;
}