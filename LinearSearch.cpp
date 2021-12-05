#include <stdio.h>
#include<iostream>
int LinearSearch (int a[], int search);
int
main ()
{
  int a[10] = { 10, 5, 3, 56, 3, 2, 13, 57, 43, 12 };
  int search;
  std::cout << "Enter the number you want to find" << std::endl;
  std::cin >> search;

  int value = LinearSearch (a, search);
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

int
LinearSearch (int a[], int search)
{
  int length = 10;

  for (int i = 0; i < length; i++)
    {
      if (a[i] == search)
	{
	  return 1;
	}
    }
  return 0;
}
// Time Complexity of LinearSearch is given by O(n) and Best case is O(1) 

