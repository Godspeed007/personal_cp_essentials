/*Calculate lenghth of LL,then find len-n+1 from beginning
*/
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    
};
struct node * newNode(int data){
    node *temp=new node();
    temp->data=data;
    temp->next=NULL;
    return temp;
}
void printnthnodefromlast(struct node*head,int n)
{
    int len=0;
    node *temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    if(len<n)
    return;
    temp=head;
    for(int i=0;i<len-n;i++)
    temp=temp->next;
    cout<<temp->data;
    return;
}
void printll(struct node*node){
    while(node!=NULL)
    {
        printf("%d",node->data);
        node=node->next;
    }
}
int main()
{
    node * head=newNode(12);
    head->next=newNode(2);
    head->next->next=newNode(22);
    head->next->next->next=newNode(34);
    head->next->next->next->next=newNode(45);
    printnthnodefromlast(head,1);
    return 0;
}
