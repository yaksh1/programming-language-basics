#include <iostream>
using namespace std;

bool IsVowel(char &v)
{
  char vowels[] = {'a', 'e', 'i', 'o', 'u'};
  bool found = false;
  for (char *i = vowels; i != vowels + sizeof(vowels) / sizeof(vowels[0]); i++)
  {
    if (tolower(v) == *i)
    {
      found = true;
    }
  }
  return found;
}
int main(int argc, char **argv)
{
  cout << "enter your sentence: ";
  int vcount = 0;
  string input;
  getline(cin, input);
  for (int i = 0; i < input.size(); i++)
  {
    if (IsVowel(input[i]))
    {
      vcount++;
    }
  }
  cout << "Vowel Count: " << vcount << endl;
  return 0;
}