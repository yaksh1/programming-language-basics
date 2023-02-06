#include <iostream>
#include <iomanip>
#include <ios>

int main(){
  //Internal justified : sign is left justified , data is right justified
    std::cout << std::endl;
    std::cout << "Internal justified : " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;
}