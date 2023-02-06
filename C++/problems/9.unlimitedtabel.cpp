#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  string o;
  int num;
  for (size_t j{1}; j < argc; j++)
  {
    for (size_t i{1}; i <= 10; i++)
    {
      o = argv[j];
      num = stoi(o);
      cout <<num<<"*"<<i<<": "<< num * i << endl;
    }
    cout << "-------------------------" << endl;
  }
}