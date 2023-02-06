#include <iostream>
using namespace std;

int main(){
  // range based for loop
  int scores[]{12,34,2,1,24,98}; //no need to update loop when array is changed
  for(auto value:scores){  
    cout<<"scores: "<<value<<endl;
  }

  // do operations 
  // print sums of all scores
  auto sum{0};
  for(auto element:scores){
    sum +=element;
  }
  cout<<"sum of all scores: "<<sum<<endl;
  return 0;
}