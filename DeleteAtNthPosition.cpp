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
    temp->next = NULL;
    if(Head==NULL)
    {
        Head =temp;
    return;    
    }
    Node* temp1 =Head;
    while(temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next = temp;
}

void Delete(int n)
{
    Node* temp1 = Head;
    if(n==1)
    {
        Head = temp1->next;
        free(temp1);
        return;
    }
    for(int i =0;i<n-2;i++)
    {
        temp1 = temp1->next;
    }
    Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
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
     printf("\n");
     Print();
    }
    int pos;
    printf("enter the position where you want to delete");
    scanf("%d",&pos);
    Delete(pos);
    Print();

    return 0;
}
