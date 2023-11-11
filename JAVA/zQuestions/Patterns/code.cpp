#include <iostream>
using namespace std;

int main()
{
  // your code goes here

  int t, l, c;
  cin >> t;
  while (t--)
  {
    cin >> l >> c;
    for (int i = 0; i < l * 3 + 1; i++)
    {
      for (int j = 0; j < c * 3 + 1; j++)
      {
        if (i == 0 || i == l * 3 || i % 3 == 0)
          cout << "*";
        else if (j == 0 || j == c * 3 || j % 3 == 0)
          cout << "*";
        else
          cout << ".";
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}