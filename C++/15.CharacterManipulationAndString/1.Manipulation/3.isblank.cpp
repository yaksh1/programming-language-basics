#include <iostream>
using namespace std;

int main(int argc, char** argv){
  cout<<"Enter your Sentence: ";
  string input;
  getline(cin, input);

  //find and print blank spaces
  size_t blankCount{};
  for (size_t i{0}; i < size(input);i++){
    if(isblank(input[i])){
      cout<<"Found a blank character at index: "<<i<<endl;
      ++blankCount;
    } 
  }
  cout<<"total blank count: "<<blankCount<<endl;
  
  return 0;
}