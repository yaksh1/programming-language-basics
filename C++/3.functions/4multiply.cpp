#include <iostream>

using namespace std;

int mul(int first, int second){
  int multi=first*second;
  return multi;
}

int main(int argv, char *argc[]){
  int multiplication, num;
  int x;
  string o;
  multiplication = 1;
  for (x = 1; x < argv; x++){
    o = argc[x];
    num = stoll(o);
    cout << "number " << x << ": " << num << endl;
    multiplication = mul(multiplication, num);
  };
  cout << "mul: " << multiplication << endl;
  return 0;

}