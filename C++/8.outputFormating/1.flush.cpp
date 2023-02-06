#include <iostream>
#include <iomanip>
#include <ios>


int main(){
	//std::flush : flushes the output buffer to its final destination. 
    std::cout << "This is a nice message...." << std::endl << std::flush;
    std::cout<<std::endl;
  //After this std::flush, the msg is sent to some storage then then terminal
}