#include<iostream> 
using namespace std;

int main(int argc, char** argv){
  //Coverting to uppercase sentence
  char message[]{"Hello World,How You all Doing."};
  char a[size(message)];
  for (size_t i{}; i < size(message);i++){
    a[i]=toupper(message[i]);
  }
  cout<<"Original String: "<<message<<endl;
  cout << "Uppercase String: " << a << endl;
}