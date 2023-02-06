#include <iostream>
using namespace std;
long long int fact(long long int v){
  if (v!=1){
    return v*fact(v-1);
  }
  else{
    return 1;
  }
}

int main(int argc, char **argv)
{
  long long int n1;
  cout << "Find the factorial of: ";
  cin >> n1;
  long long int f = fact(n1);
  cout <<"factorial of "<<n1<<" is: "<<f<<endl;
  return 0;
}