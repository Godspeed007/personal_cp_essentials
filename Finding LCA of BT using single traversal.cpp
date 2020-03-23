#include<bits/stdc++.h>
using namespace std;
struct node{
    struct node *left,*right;
    int key;
    
};
node *newNode(int key)
{
    node * temp =new node;
    temp->key=key;
    temp->left=temp->right=NULL;
    return temp;
}
struct node *findLCA(struct node *root,int n1,int n2)
{
    if(root==NULL)
    return NULL;
    if(root->key==n1||root->key==n2)
    return root;
    node *left_LCA=findLCA(root->left,n1,n2);
    node *right_LCA=findLCA(root->right,n1,n2);
    if(left_LCA&&right_LCA)
    return root;
    return(left_LCA!=NULL)?left_LCA:right_LCA;
    
}
int main()
{
    node * root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->right=newNode(4);
    root->left->left=newNode(5);
    root->right->right=newNode(6);
    root->right->left=newNode(7);
    cout<<"LCA of (4,5)  \n"<<findLCA(root,4,5)->key<<"\n";
    cout<<"LCA of (2,6)  \n"<<findLCA(root,2,6)->key<<"\n";
    cout<<"LCA of (5,3)  \n"<<findLCA(root,5,3)->key<<"\n";
    return 0;
    
}
