#include <iostream>
using namespace std;

int main(int argc, char** argv){
  //checking if its alphanumeric 
  //true if non-zero and false if 0
  cout<<"'C' is alphanumeric: "<<isalnum('C')<<endl;
  cout << "'*' is alphanumeric: " << isalnum('*') << endl;

  //test condition
  cout << "Enter Your Character: ";
  char input;
  cin>>input;
  if(isalnum(input)){
    cout<<input<<" is alphanumeric"<<endl;
  }else{
    cout<<input<<" is not alphanumeric"<<endl;
  }
  return 0;
}