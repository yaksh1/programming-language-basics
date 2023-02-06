#include <iostream>
using namespace std;

int add(int first_param,int second_param){
  int result=first_param + second_param;
  return result;
}

int main(){
  int a,b;
  cout<<"Input a number:";
  cin>>a;
  cout<<"Input a number:";
  cin>>b;
  int sum=add(a,b);
  cout<< "sum: "<<sum<<endl;
  return 0;
}