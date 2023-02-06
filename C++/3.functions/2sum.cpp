#include <iostream>
using namespace std;

float add(float first_param, float second_param)
{
  float result = first_param + second_param;
  return result;
}

int main(int argv, char *argc[])
{

  float sum, num;
  int x;
  string o;
  sum = 0;
  for (x = 1; x < argv; x++){
    o = argc[x];
    num = stof(o);
    cout << "number " << x << ": " << num << endl;
    sum = add(sum, num);
  };
  cout << "sum: " << sum << endl;
  return 0;
}
