#include <stdio.h>
#include<iostream>
#include<math.h>
int main()
{
    int number;
    std::cout << "Enter a number you want to reverse" << std::endl;
    std::cin >> number;
    int reverse =0;
    int temp = number;
    int amstrong = 0;
    int last;
     while(number>0)
     {
        last = number%10;
        reverse = reverse*10 +last;
        number= number/10; 
        amstrong = amstrong + last*last*last;
     }
     std::cout << "The reverse number is " << reverse<< std::endl;
     if(temp==reverse)
     {
         std::cout << "The given number is palindrome" << std::endl;
     }
     else{
         std::cout << "The given number is not palindrome" << std::endl;
     }
     if(temp == amstrong)
     {
         std::cout << "The given number is amstrong " << temp<< std::endl;
     }
     else{
         std::cout << "The given number is not amstrong " << temp << std::endl;
     }
    return 0;
}
