#include <iostream>
using namespace std;

int main()
{
  // for (unsigned int i{0}; i < 10; i++)
  // {
  //   cout << i << ": this is a for loop" << endl;
  // }

  // --------------------------------------------------------------------------------------------------------------
  // GOOD WAY TO WRITE A FOR LOOP
  // --------------------------------------------------------------------------------------------------------------
  const size_t count{10}; //size_t: to represent unsigned int for positive numbers
  size_t i{0};
  for (; i < count; ++i)
  {
    cout << i << ": always write this way." << endl;
  }

  // sizeof(size_t)
  // cout<<"sizeof(size_t)"<<sizeof(size_t)<<endl;
  return 0;
} 