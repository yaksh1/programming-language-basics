#include <iostream>
using namespace std;

int reverse(int n){
  int sum=0, r;
  while(n!=0){
    r = n % 10;
    sum = sum * 10 + r;
    n = n / 10;
  }
  return sum;
}

int main(int argc, char **argv){
  cout << "Enter a number: ";
  int n;
  cin >> n;
  cout<<"reversed number: "<<reverse(n)<<endl;
}