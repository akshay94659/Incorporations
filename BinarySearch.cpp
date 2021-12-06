#include <stdio.h>
#include<iostream>
int BinarySearch (int b[],int left,int right, int search);
int main ()
{

  int b [10] = {10,20,30,40,50,60,70,80,90,100};
  int left = 0, right =9;
  int search;
  std::cout <<  "Enter the number you want to find" << std::endl;
  std::cin >> search;

     int value = BinarySearch(b, left,right,search);
    //  std::cout << value << std::endl;
  if (value == 1)
    {
      std::cout << "Element has been found" << std::endl;
    }
  else
    {
      std::cout << "Element has not been found" << std::endl;
    }
  return 0;
}

int BinarySearch(int b[],int left, int right, int search)
{ 
    while(left<=right)
    {
     int mid = left+(right-left) /2;
     
     std::cout << mid << std::endl;
    
        if(b[mid] == search)
        {
            return 1; 
        }
         if (search < b[mid])
        {
           right = mid -1;
        }
        else{
           left = mid+1;
        }
    }
    return 0;
}

// time complexity of BinarySearch ia o(logn) and best case is o(1)

