/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node *next;
};
struct Node *Head;
void
Insert (int x, int n)
{
  Node *temp = (Node *) malloc (sizeof (struct Node));
  temp->data = x;
  temp->next = NULL;
  if (n == 1)
    {
      temp->next = Head;
      Head = temp;
      return;
    }
  Node *temp2 = Head;
  for (int i = 0; i < n - 2; i++)
    {
      temp2 = temp2->next;
    }
  temp->next = temp2->next;
  temp2->next = temp;

}

void
Print ()
{
  struct Node *temp2 = Head;
  printf ("The List is : ");
  while (temp2 != NULL)
    {
      printf ("%d ", temp2->data);
      temp2 = temp2->next;
    }
}

int
main ()
{
  Head = NULL;
  Insert (2, 1);
  Insert (3, 2);
  Insert (1, 3);
  Insert (5, 1);
  Print ();
  return 0;
}
