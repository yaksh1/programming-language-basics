#include <iostream>
using namespace std;

int main(){
  int max{};
  int number_1;
  int number_2;
  cout<<"number 1: ";
  cin>>number_1;
  cout<<"number 2: ";
  cin>>number_2;

  cout<<"------------------------"<<endl;
  
  cout<<"using regular if clause\n";
  if(number_1>number_2){
    max=number_1;
  }else{
    max=number_2;
  }
  
  cout<<"max: "<<max<<endl;
  
  cout<<"------------------------"<<endl;
  
  cout<<"using ternary operator"<<endl;
  max = (number_1>number_2) ? number_1:number_2; //number 1 and 2 should be of same types
  cout<<"max: "<<max<<endl;
  return 0;
}