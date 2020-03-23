/* LCA of two nodes in BT is the lowest node which is shared ancestor of both nodes and farthest from the root.
   Use of LCA is common while finding distance b/w two nodes.
   Suppose we want to find distance b/w n1 and n2.
   Then,:-- x = d1 + d2 - 2(y)
          where 
                x=distance b/w n1 and n2 
                d1=distance b/w n1 and root
                d2=distance b/w n2 and root
                y= distance b/w LCA and root   */


#include<bits/stdc++.h>
using namespace std;
struct node{                                          //A BT node
    struct node *left,*right;
    int key;
    
};
node *newNode(int key)                                // To create a new node
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
    if(root->key==n1||root->key==n2)                   // Case when a node is considered a descendant of itself
    return root;
    node *left_LCA=findLCA(root->left,n1,n2);         //Looking for keys in right and left subtrees
    node *right_LCA=findLCA(root->right,n1,n2);
    if(left_LCA&&right_LCA)                           //If both above calls are giving NON-NULL then their root is the answer.
    return root;
    return(left_LCA!=NULL)?left_LCA:right_LCA;        //If left LCA is not NULL then return it(left_LCA),otherwise return right LCA
    
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
