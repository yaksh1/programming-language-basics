#include <iostream>
using namespace std;

int main(int argc, char **argv){
  //checking how many digits we have
  cout << "Enter your Sentence: ";
  string input;
  getline(cin, input);
  int digitCount{};
  for(auto i:input){
    if(isdigit(i)){
      cout<<"Found digit: "<<i<<endl;
      ++digitCount;
    }
  }
  cout<<"total digit count: "<<digitCount<<endl;
  return 0;
}