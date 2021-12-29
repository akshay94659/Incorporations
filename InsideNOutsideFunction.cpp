#include <stdio.h>
#include<iostream>

class Addition {
    int num1;
    int num2;

    public:
    void getData(int x, int y){
        num1 = x;
        num2 = y;
    }
    void sums();
};

void Addition :: sums(){
    int sum1 = num2+num1;
    std::cout << sum1 << std::endl;
}
int main()
{
    // creating object obj1 of class Addition
    Addition obj1;
    obj1.getData(10,20);
    obj1.sums();
    
    // creating object obj2 of class Addition
    Addition obj2;
    obj2.getData(20,40);
    obj2.sums();
    // obj2.num1 =50; Error while trying to access the private member of class
    return 0;
}
