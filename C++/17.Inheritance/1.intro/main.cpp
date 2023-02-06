#include <iostream>
using namespace std;

class AbstractClass{ //anyone who signs (inherits) this class has to implement methods of this class
  virtual void promotion() = 0;
};

class Employee:AbstractClass{
  private:
    string company;
    int age;
  protected:
    string name;
  public:
    string getName(){
      return name;
    }
    string getCompany()
    {
      return company;
    }
    int getAge()
    {
      return age;
    }
    void setName(string name){
      this->name = name;
    }
    void setCompany(string company)
    {
      this->company = company;
    }
    void setAge(int age)
    {
      this->age = age;
    }
    Employee() = default; // default constructor
    Employee(string name,string company,int age){
      this->name = name;
      this->company = company;
      this->age = age;
    }
    void introduce(){
      cout << "name: " << name << endl;
      cout << "company: " << company << endl;
      cout << "age: " << age << endl;
    }
    void promotion(){
      if(age>30){
        cout << name<< ": promoted!!" << endl;
      }else{
        cout << name<< ": not promoted" << endl;
      }
    }
   virtual void work(){ // we add virtual to allow polymorphism when base class is used to refer to a child object
      cout << name << " is checking emails" << endl;
    }
};

// inheriting
class Developer: public Employee{
  public:
    string favLang;
    Developer() = default;
    Developer(string name, string company, int age, string favLang)
        : Employee(name, company, age) // employee will take care of the first three parameters as we inherit from it
    { 
      this->favLang = favLang;
    }
    void fixBug(){
      cout << name << " fixed the bug using " << favLang << endl;
    }
    void work(){
      cout << name << " is writing code" << endl;
    }
};

int main(){
    Employee e1("anna","amazon",34);
    Employee e2("alfie", "netflix", 28);

    // e1.promotion();
    // e2.promotion();

    Developer d1("yaksh", "microsoft", 25, "JAVA");
    d1.fixBug(); // calling developer class method
    d1.promotion(); //calling employee class method

    d1.work(); // method overriding
    // most common use of polymorphism is when a parent class is used to refer to child class object

    Employee *e3 = &d1;
    e3->work();
    return 0;
}