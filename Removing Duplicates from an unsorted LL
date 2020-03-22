#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node * next;
};
struct node * newnode(int data)
{
    node * temp=new node;
    temp->data=data;
    temp->next=NULL;
    return temp;
}
void removedupli(struct node*start)
{
    unordered_set<int>seen;
    struct node * curr=start;
    struct node * prev=NULL;
    while(curr!=NULL)
    {
        if(seen.find(curr->data)!=seen.end())
        {
            prev->next=curr->next;
            delete(curr);
            
        }
        else 
        {
            seen.insert(curr->data);
            prev=curr;
        }
        curr=prev->next;
    }
}
void printll(struct node*node)
{
    while(node!=NULL)
    {
        printf("%d   ",node->data);
        node=node->next;
    }
}
int main()
{
    struct node* start=newnode(10);
    start->next=newnode(11);
    start->next->next=newnode(10);
    start->next->next->next=newnode(14);
    start->next->next->next->next=newnode(13);
    cout<<"before removal of duplicacy"<<endl;
    printll(start);
    cout<<"\nafter removal of duplicacy"<<endl;
    removedupli(start);
    printll(start);
    return 0;
}
