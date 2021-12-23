/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* Head;
void Insert(int x)
{
  Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = Head;
    Head= temp;
}

void Print()
{
    struct Node* temp2 =Head;
    printf("The List is : ");
    while(temp2 != NULL)
    {
        printf("%d ",temp2->data);
        temp2 = temp2->next;
    }
}
int main()
{
    Head = NULL;
    printf("Enter the numbers you want to Insert \n");
    int n;
    scanf("%d",&n);
    printf("Insert the number now \n");
    int x;
    for(int i =0;i<n;i++)
    {
     scanf("%d",&x);
     Insert(x);
     Print();
    }

    return 0;
}
