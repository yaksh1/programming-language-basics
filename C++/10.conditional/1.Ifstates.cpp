#include <iostream>
using namespace std;

int main(){
  int a;
  int b;
  cout<<"number 1: ";
  cin >>a;
  cout<<"number 2: ";
  cin>>b;
  if(a>b){
    cout<<"a>b"<<endl;
  }
  else if(a<b){
    cout<<"a<b"<<endl;
  }
  else if(a=b){
    cout<<"a=b"<<endl;
  }  
  else if(a<=b){
    cout<<"a<=b"<<endl;
  }
  else if(a>=b){
    cout<<"a>=b"<<endl;
  }
}
