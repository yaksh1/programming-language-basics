#include <iostream>
#include <istream>
#include <string>
#include <map>
using namespace std;

  enum tool {pen,marker,eraser,rectangle,circle,ellipse};
  map<string,tool>tools;

  void ToolsName(){
    tools["pen"]=pen;
    tools["marker"]=marker;
    tools["eraser"]=eraser;
    tools["rectangle"]=rectangle;
    tools["circle"]=circle;
    tools["ellipse"]=ellipse;
  }

int main(){
  ToolsName();
  string input;
  cout<<"Enter the required tool: ";
  cin>>input;
  switch(tools[input]){
    case pen:
      cout<<"pen is selected"<<endl;
    break;

    case marker:
      cout<<"marker is selected"<<endl;
    break;

    case eraser:
      cout<<"eraser is selected"<<endl;
    break;    

    case rectangle:
      cout<<"rectangle is selected"<<endl;
    
    break;

    case ellipse:
      cout<<"ellipse is selected"<<endl;
    break;

    case circle:
      cout<<"circle is selected"<<endl;
    break;

    default:
      cout<<"no such tool"<<endl;
    break;
  }
  return 0;
}