#include <iostream>
using namespace std;

int main(int argc, char **argv){
  cout << endl;
  cout<<"This program will check if the entered year is leap year or not"<<endl;
  cout << endl;
  cout << "how many years you want to check?: ";
  int n,y;
  cin >> n;
  for (size_t i{1}; i <= n;i++){
    cout<<"Enter the year to be checked : ";
    cin >>y;
    if (y % 400 == 0)
    {
      cout << y << " is a leap year" << endl;
    }
    else if (y % 4 == 0 && y % 100 != 0)
    {
      cout << y << " is a leap year" << endl;
    }
    else
    {
      cout << y << " is not a leap year" << endl;
    }
  }
  return 0;
}