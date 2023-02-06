#include <iostream>
using namespace std;

float divide(float first_para,float second_para) {
  float division = first_para/second_para;
  return division;
}

int main(){
  float a,b;
  cout<<"Enter a Number: ";
  cin>>a;
  cout<<"Enter a Number: ";
  cin>>b;
  float div = divide(a,b);
  cout<<"division: "<<div<<endl;
  return 0;
}