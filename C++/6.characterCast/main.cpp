#include <iostream>
using namespace std;

int main(){
  char a{'b'};
  cout << "value: "<<a<<endl;
  cout <<"value(int): "<<static_cast<int>(a)<<endl;
  cout << "hello";
}