#include <iostream>
using namespace std;

int main(int argc, char **argv){
  //Declaring and intializing pointer
  //char *p_char{"hello"}; //compiler error message (use const)

  const char *p_char{"hello"}; //hello gets coverted to array of characters
  cout << "p_char full string: " << p_char << endl;
  cout << "p_char first character: " << *p_char << endl;
  // *p_char = 'B' //compiler error message (non modifiable)
  
  //To allow modifiable string
  char message[]{"Hello, world!"};
  message[0] = 'B';
  cout<<"message: " << message << endl;
  return 0;
  
}