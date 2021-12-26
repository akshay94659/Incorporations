/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int a = 100;
  printf ("The value is: %d \n", a);
  printf ("The address of variable  is:%p \n", &a);
  
  int *p1 = &a;
  
  printf ("The value is: %d \n", *p1);
  printf ("The address of variable  is: %p \n", p1);
  
  int **p2 = &p1;
   printf ("The value is: %d ", **p2);
  printf ("The address of variable  is: %p ", *p2);
  
  

  return 0;
}
