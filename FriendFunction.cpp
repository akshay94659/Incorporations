#include <iostream>
using namespace std;
 
class base {
    int b;
public: 
    void setVal(int y){
        b =y;
    }
    int getVal()
    {
        return b;
    }

    friend void add();
};
 
class Intermediate_derived  {
    int a;
public:
    void setVal(int x)
    {
       a=x;
    }
    
    int getVal()
    {
        return a;
    }
    friend void add();
};

void add(base b, Intermediate_derived id)
{
    int sum = b.getVal() + id.getVal();
    std::cout << sum << std::endl;
}
int main()
{
    Intermediate_derived id;
    id.setVal(10);
   
    base b;
    b.setVal(20);
    
    add(b,id);
  
}
