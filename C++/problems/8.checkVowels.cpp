#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  cout << "enter an alphabet: ";
  char input;
  cin >> input;
  if(input=='a' || input=='A' || input=='E' || input=='e' || input=='i' || input=='I' || input=='O' || input=='o' || input=='U' || input=='u' ){
    cout << "entered alphabet "<<input<<" is a vowel" << endl;
  }else{
    cout << "entered alphabet " << input << " is a consonant" << endl;
  }
}