#include <iostream>
#include <cmath>
using namespace std;

int main(){
  
  double weight=6.9;
  double pi=acos(-1);

  //floor (cuts off the decimal part)
  cout<< "weight rounded to floor is "<<floor(weight)<<endl;
  // ceil (rounds off to next integer)
  cout<< "weight rounded to ceil is "<<ceil(weight)<<endl;
  // round
  cout<< "weight rounded to round is "<<round(weight)<<endl;
  // abs
  cout<< "absolute value of -100 is "<<abs(-100)<<endl;
  // pow
  cout<< "the value of 2^4 is "<<pow(2,4)<<endl;
  // exp
  cout<< "the value of e^2 is "<<exp(2)<<endl;
  // log
  cout<< "the value of loge2 "<<log(2)<<endl;
  // log10
  cout<< "the value of log2 to base 10 is "<<log10(2)<<endl;
  // sin
  cout<<"the value of sin(pi/2) is "<<sin(pi/2)<<endl;
  // sqrt
  cout<<"the sqrt of 121 is "<<sqrt(121)<<endl;
  return 0;
}