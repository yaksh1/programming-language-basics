#include <iostream>
using namespace std;
int main(){
  int a;
  int b=4;
  int c{};
  int d{12};
  int e{b+d};
  int f(2.6);
  cout<<"a: "<<a<<endl;
  cout<<"b: "<<b<<endl;
  cout<<"c: "<<c<<endl;
  cout<<"d: "<<d<<endl;
  cout<<"e: "<<e<<endl;
  cout<<"f: "<<f<<endl;
  cout<<"memory size: "<<sizeof(int)<<endl;
  return 0;
}
