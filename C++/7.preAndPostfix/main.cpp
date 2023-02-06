#include <iostream>
using namespace std;

int main(){
  int value = 5;
  // postfix
  cout<<value++<<endl;//prints 5
  cout<<value<<endl;//prints 6
  cout<<"-------------"<<endl;
  value=5;
  cout<<value--<<endl;//prints 5
  cout<<value<<endl;//prints 4

  cout<<"-------------"<<endl;
  
  // prefix
  value=5;
  ++value;
  cout<<value<<endl;//prints 6
  value=5;
  cout<<"-------------"<<endl;
  cout<<--value<<endl;//prints 4
  return 0;
}

