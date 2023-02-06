#include <iostream>
using namespace std;



int main(int argc, char **argv){
  cout << "enter a number: ";
  int n;
  cin >> n;
  int sum, r, t;
  t = n;
  while (n != 0)
  {
    r = n % 10;
    sum = sum * 10 + r;
    n /= 10;
  }

  if(t==sum){
    cout << "it is a palindrome number" << endl;
  }else{
    cout << "it is not a palindrome number" << endl;
  }
  return 0;
}