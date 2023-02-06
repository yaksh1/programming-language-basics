#include <iostream>
using namespace std;

int main(int argv,char *argc[]){
  
  const size_t count{10};
  size_t i{0};
  while(i<count){
    cout<<i<<": this is a while loop"<<endl;
    i++;
  }
}