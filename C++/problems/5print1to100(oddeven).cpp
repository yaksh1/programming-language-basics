#include <iostream>
using namespace std;

int main(int argc, char **argv){
  cout << "Enter your starting point: ";
  size_t i;
  cin >> i;
  cout << "Enter ending point: ";
  int count;
  cin >> count;

  for (; i < count+1; i += 2){
    cout << i << " ";
  }
  return 0;
}