#include <iostream>
using namespace std;

int main(int argc, char** argv){
  int int_data{3};
  double double_data{2.4};

  // references                         //----------------------------------------------------------------
  int &int_ref{int_data};               // IF YOU CHANGE ORIGINAL DATA REF WILL ALSO CHANGE AND VICE VERSA
  double &double_ref{double_data};      //----------------------------------------------------------------

  //print stuff (ref and original prints the same things)
  cout << "int_data: " << int_data << endl;
  cout << "double_data: " << double_data << endl;
  cout << "&int_data: " << &int_data << endl;
  cout << "&double_data: " << &double_data << endl;
  cout << "============================================" << endl;
  cout << "int_ref: " << int_ref << endl;                                 
  cout << "double_ref: " << double_ref << endl;                           
  cout << "&int_ref: " << &int_ref << endl;
  cout << "&double_ref: " << &double_ref << endl;
  return 0;
}