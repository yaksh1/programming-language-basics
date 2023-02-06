#include <iostream>
using namespace std;

int getSum(int n){
  int r,sum=0;
  while(n!=0){
    r = n % 10;
    sum += r;
    n = n / 10;
  }
  return sum;
}

int main(int argc, char **argv){
  cout << "enter a number: ";
  int n;
  cin >> n;
  cout << "total sum: " <<getSum(n)<< endl;
  return 0;
}