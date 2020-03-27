/* Time Comp--o(n)
   Space Comp--o(1) when u dont consider stack size for function calls otherwise o(n);
   Note-- There can be more methods to determine the time comp but in general the above given is widely acclaimed.
   i.e. there is on master method also for calculating the time comp of tree order traversal. and one with the simple recursive computation of 
   various stepwise time comp at different levels,above is this case(o(n)).
   */
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left,*right;
    node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};
void preorder(struct node* node)
{
    if(node==NULL)
    return;
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
    
}
void postorder(struct node* node)
{
     if(node==NULL)
    return;
    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" ";
}
void inorder(struct node* node)
{
     if(node==NULL)
    return;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}
int main()
{
    struct node* root=new node(1);
    root->left=new node(4);
    root->right=new node(45);
    root->left->left=new node(23);
    root->right->right=new node(22);
    cout<<"preorder traversal is"<<"\n";
    preorder(root);
    cout<<"\n postorder traversal is"<<"\n";
    postorder(root);
    cout<<"\n inorder traversal is \n";
    inorder(root);
    return 0;
}
