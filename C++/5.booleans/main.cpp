#include <iostream>
using namespace std;

int main(){
  bool green_light{true};
  bool red_light{false};

  if(green_light==true){
    cout<<"GO!"<<endl;
  }else{
    cout<<"STOP!"<<endl;
  }

  if(red_light){
    cout<<"STOP mf"<<endl;
  }else{
    cout<<"GO mf"<<endl<<endl;
  }
   
   cout<<"green_light: "<<green_light<<endl;
   cout<<"red_light: "<<red_light<<endl<<endl;

   cout<<boolalpha;
   cout<<"green_light: "<<green_light<<endl;
   cout<<"red_light: "<<red_light<<endl;   

}