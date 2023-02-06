#include <iostream>
using namespace std;

int main(int argv, char *argc[]){
  // Runs the body first then checks the condition
  const size_t count{10};
  size_t i{11};
  do{
    cout<<i<<": this code still runs"<<endl;
    ++i;
  }while(i<count);
  return 0;
}