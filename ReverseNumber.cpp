#include <stdio.h>
#include<iostream>
int main()
{
    int number;
    std::cout << "Enter a number you want to reverse" << std::endl;
    std::cin >> number;
    int reverse =0;
    int last;
     while(number>0)
     {
        last = number%10;
        reverse = reverse*10 +last;
        number= number/10; 
     }
     std::cout << "The reverse number is " << reverse<< std::endl;
    return 0;
}
