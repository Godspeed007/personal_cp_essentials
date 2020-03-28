/* Our main idea is we visit a node and the store all its children nodes in A FIFO queue.
   Time Comp-o(n)
   Space Comp=o(n)
   where n is no of nodes in the BT
   */
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left,*right;
};
void BFT(node * root)
{
    if(root==NULL)
    return;
    queue<node *>q;                              //Making a empty queue
    q.push(root);                                 //push starts with root
    while(q.empty()==false)                       //and ends when queue gets empty                     
    {
        node * node=q.front();                   
        cout<<node->data<<" ";                    //print the front element of queue
        q.pop();                                  //and then pop it
    
    if(node->left!=NULL)                 //enqueueing left and right children
    q.push(node->left);
    if(node->right!=NULL)
    q.push(node->right);
    }
    
}
node *newnode(int data){                  //For creating a new BT node
    node *temp=new node();
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
int main()
{
    node *root=newnode(233);
    root->left=newnode(7);
    root->right=newnode(99);
    root->left->right=newnode(12);
    root->left->right->left=newnode(99);
    cout<<"The level order traversal of the tree is\n";
    BFT(root);
    return 0;
}
