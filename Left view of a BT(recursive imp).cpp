//* Left view of a BT is the set of all nodes which are first in their levels.
     Here to find this set the main idea is to get hold of that node in a level(particular) which on getting encountered while traversing
     is greater than maxlevel,Hence that node will be the first node in that level.
     We are doing a simple recursive traversal.
     Time comp-o(n)
     Space comp-o(n),due to stack space for recursive calls.  *//
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left,*right;
};
node *newNode(int val){                                              //Function to create a new BT node
    node*temp=new node();
    temp->data=val;
    temp->left=temp->right=NULL;
    return temp;
}
void leftview(node *root,int level,int*maxlevel)                     //Recursive function to print left view of BT
{
    if(root==NULL)
    return;
    if(level>*maxlevel)                                              //Checking for the 1st node(main idea)
    {
    cout<<root->data<<"\t";
    *maxlevel=level;
        
    }
    leftview(root->left,level+1,maxlevel);                            //Recurrence of function over left and right subtrees to get the 1st node
    leftview(root->right,level+1,maxlevel);
    
}
void leftviewenf(node *root)                                         //Kind of enforcing easy function(wrapper) which contains only a single parameter
{
     int maxlevel=0;
     leftview(root,1,&maxlevel);
     
}
int main()
{
    node *root=newNode(10);
    root->left=newNode(34);
    root->right=newNode(22);
    root->right->left=newNode(2);
    root->left->left=newNode(12);
    cout<<"the left view of bt is as follows"<<"\n";
    leftviewenf(root);
    return 0;
}
