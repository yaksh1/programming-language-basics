#include <iostream>
using namespace std;

int main(int argv,char *argc[]){

  // DECLARE ARRAY
  /*int array[10]; //junk data
  //READ DATA
  cout<<array[0]<<endl;
  */
  
  // Declare and initialize at the same time
  cout<<"how to write an array: "<<endl;
  const size_t n = 5;
  double wages[n]{12,10.2,17.9,15,14};
  size_t i;
  for(;i<n;i++){
    cout<<"wages["<<i<<"]: "<<wages[i]<<endl;
  }

  // Write data using loop
  int points[10];
  for(size_t i{0};i<10;i++){
    points[i]=10*i;
  }

  //Print the data out
  for(size_t i{0};i<10;++i){
    cout<<"points["<<i<<"]: "<<points[i]<<endl;
  }
    
  return 0;
}