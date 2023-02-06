#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  cout << "how many tables do you want: ";
  int n;
  cin >> n; 
  for (size_t i{1}; i <= n;i++){
    for (size_t j{1}; j <= 10; j++){
      cout << i << "*" << j << ": " << i * j << endl;
    }
    cout<<"-----------------"<<endl;
  }
}