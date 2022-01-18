#include <iostream>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* GetnewNode(int data)
{
    struct Node * temp = new Node();
    temp->data=data;
    temp->left = NULL;
    temp->right= NULL;
    return temp;
}
struct Node* BstInsert(struct Node* root, int data)
{
    if (root == NULL)
    {
        root = GetnewNode(data);
        
    }
    else if(data<=root->data)
    {
        root->left = BstInsert(root->left, data);
    }
      else 
    {
        root->right= BstInsert(root->right, data);
    }
    return root;
}

void Preorder(struct Node* root)
{
    if(root ==NULL)
    {return;}
    std::cout << root->data << std::endl;
    Preorder(root->left);
    Preorder(root->right);
}
void InOrder(struct Node* root)
{
    if(root ==NULL)
    {return;}
    InOrder(root->left);
    std::cout << root->data << std::endl;
    InOrder(root->right);
}


using namespace std;

int main()
{
   struct Node* root =NULL;
    root = BstInsert(root,40);     //  tree is 40
    root = BstInsert(root,20);             // 20    50
    root = BstInsert(root,50);           // 10 
    root = BstInsert(root,10);
    Preorder(root);
    InOrder(root);

    return 0;
}
