#include <iostream>
using namespace std;

int main(){
  // use size() for the limit so that you dont have to change for loop when array is updated
  int scores[]{12,45,32,23,57,81};
  cout<<"no. of elements in scores: "<<size(scores)<<endl;
  int count{size(scores)};
  for(size_t i{0};i<count;++i){
    cout<<"scores["<<i<<"]: "<<scores[i]<<endl;
  }
  return 0;
}