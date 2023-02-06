#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  int a, b, c;
  cout << "enter first number: ";
  cin >> a;
  cout << "enter second number: ";
  cin >> b;
  c=a;
  a = b;
  b=c;
  cout << "original first number: " << b << " , swapped first number: " << a<< endl;
  cout << "original second number: " << a<< " , swapped second number: " << b<<endl;

}