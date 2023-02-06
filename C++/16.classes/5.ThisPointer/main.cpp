#include <iostream>
#include <string_view>
using namespace std;

class Dog{
  public:
  // default constructor
    Dog() = default;

    Dog(string_view name_param,string_view breed_param,int age_param){
      name = name_param;
      breed = breed_param;
      p_age = new int; //dynamically allocating memory
      *p_age = age_param;
      cout << "dog constructor called for: " << name <<" at " <<this /* this is the address where constructor is created*/ << endl;
    }

    // destructor; // it is called when its use is done by default that is when main function is completed 
    ~Dog(){ // destructor will not have any parameters 
      delete p_age;
      cout << "dog destructor called for: " << name << " at " << this /*where destructor deletes*/ << endl;
    }

    // print function
    void display(){
      cout << "Dog (" << this << ") [ name: " << name << " ,breed: " << breed << " ,age: " << *p_age<<" ] " << endl;
    }

    // setters

    // for pointers

    /* Dog* set_name(string name){
      this->name = name;
      return this;
    }

    Dog* set_breed(string breed)
    {
      this->breed = breed;
      return this;
    }

    Dog* set_age(int p_age)
    {
      *(this->p_age) = p_age;
      return this;
    }
    */

    // for reference
    Dog& set_name(string name){
      this->name = name;
      return *this;
    }

    Dog& set_breed(string breed)
    {
      this->breed = breed;
      return *this;
    }

    Dog& set_age(int p_age)
    {
      *(this->p_age) = p_age;
      return *this;
    }

  private:
    string name;
    string breed;
    int *p_age{nullptr};
};

int main(){
  // constructors
  Dog d1("d1", "retriever", 3);
  d1.display(); 

 /*
  d1.set_name("Ajay");
  d1.set_age(4); */    // another method can be used

  // chained calls using pointers
  // d1.set_name("Ajay")->set_breed("german")->set_age(5);

  // chained calls using reference
  d1.set_name("Ajay").set_breed("german").set_age(5);
  d1.display();

  cout << "Done with main function" << endl;

  return 0;
}