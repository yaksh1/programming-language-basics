#include <iostream>
using namespace std;

int main(int argc, char **argv){
  // Declaring char array

  //----------------------------------------------------------------
  //WAYS TO WRITE NULL TERMINATED ARRAY
  //----------------------------------------------------------------

  /* char message[]{'h', 'e', 'l', 'l', 'o','\0'};
     char message[6]{'h', 'e', 'l', 'l', 'o'}
     char message[]{"hello"}
  */

  // without for loop
  char note[]{'h','e','l','l','o','\0'};//Note:This is called C-string ,needs '\0' to execute the code properly without for loop
  cout << "note: ";
  cout << note;
  // using for loop
  char text[5]{'h', 'e', 'l', 'l', 'o'};
  cout << endl;
  cout << "text: ";
  for(auto i:text){
    cout << i;
  }
  cout << endl;
  //civilized method
  char message[]{"Hello World"};
  cout << "message: ";
  cout << message;
}