#include <iostream>
#include <string_view>
using namespace std;

class Dog{
  public:
    Dog() = default;
    Dog(string_view name_param,string_view breed_param,int age_param){
      name = name_param;
      breed = breed_param;
      p_age = new int; //dynamically allocating memory
      *p_age = age_param;
      cout << "dog constructor called for: " << name << endl;
    }
    // destructor; // it is called when its use is done by default that is when main function is completed 
    ~Dog(){ // destructor will not have any parameters 
      delete p_age;
      cout << "dog destructor called for: " << name << endl;
    }

  private:
    string name;
    string breed;
    int *p_age{nullptr};
};

int main(){
    Dog d1("d1", "retriever", 3);
    Dog d2("d2", "retriever", 3);
    Dog d3("d3", "retriever", 3);

    // destructors are called in reverse order with compared to constructors
      
    cout << "Done with main function" << endl;
    return 0;
}