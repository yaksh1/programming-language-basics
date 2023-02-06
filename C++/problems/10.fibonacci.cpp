#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  int n1{0},n2{1},n3,input;
  cout << "How many number in series do you want: ";
  cin >> input;
  cout << n1 << " " << n2 << " ";

  for (size_t i{1}; i <= input-2;i++){
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
    cout << n3 << " ";
  }
    return 0;
}