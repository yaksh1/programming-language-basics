#include <iostream>
using namespace std;

int main(int argc, char** argv){
  //check if its alphabetical
  cout << "Enter Your Character: ";
  char input;
  cin>>input;
  if(isalpha(input)){
    cout<<input<<" is alphabetic"<<endl;
  }else{
    cout<<input<<" is not alphabetic"<<endl;
  }
  return 0;
}