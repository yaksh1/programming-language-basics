#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
  int i;
  for (i = 2; i < floor(n / 2) + 1; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

int main(int argc, char **argv)
{
  cout << "Enter a number: ";
  int n,x{2};
  cin >> n;
  while (x<=n)
  {
    if (isPrime(x))
    {
      cout << x << " ";
    }
    x++;
    // else
    // {
    //   cout << "Number is not a prime" << endl;
    // }
  }
  return 0;
}