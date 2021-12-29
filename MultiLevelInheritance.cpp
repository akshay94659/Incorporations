#include <iostream>
using namespace std;
 
class base {
public: 
    void print1(){
        std::cout << "Printed from Base Class" << std::endl;
    }
};
 
class Intermediate_derived : public base {
public:
 
    void print2()
    {
        cout << "Printed from Intermediate_derived Class" << endl;
    }
};

class derived : public Intermediate_derived{
    public: void print3()
    {
        std::cout << "Printed from derived class" << std::endl;
    }
};
 
int main()
{
    derived d;
    d.print1();
    d.print2();  
    d.print3();
   
    Intermediate_derived id;
    id.print1();
   
    base b;
    b.print1();
  
}
