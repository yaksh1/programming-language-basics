#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  // checking how many lowercases characters are there
  cout << "Enter Your Sentence: ";
  int lowercaseCount{}, uppercaseCount{};
  string input;
  getline(cin, input);
  for (size_t i{}; i < input.size(); i++)
  {
    if (islower(input[i]))
    {
      cout << " " << input[i];
      ++lowercaseCount;
    }
    if (isupper(input[i]))
    {
      // cout << " " << input[i];
      ++uppercaseCount;
    }
  }
  cout << endl;
  cout << "Total lowercaseCount: " << lowercaseCount << endl;
  cout << "Total uppercaseCount: " << uppercaseCount << endl;
  return 0;
}