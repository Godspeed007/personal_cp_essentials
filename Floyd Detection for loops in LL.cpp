#include<bits/stdc++.h>
using namespace std;                                       //Time Comp=o(n)
                                                           //Space Comp=o(1)
struct node{
    int data;
    node * next;
};
void push(node** href,int new_data)
{
    node * new_node=new node();
    new_node->data=new_data;
    new_node->next=(*href);
    (*href)=new_node;
    
}
int floyd(node * list)
{
    node * slow_p =list,*fast_p=list;
    while(slow_p&&fast_p&&fast_p->next)
    {
        slow_p->next;
        fast_p->next->next;
        if(slow_p==fast_p)
        cout<<"loop found";
        return 1;
    }
    return 0;
}
int main()
{
    node * head=NULL;
    push(&head,8);
    push(&head,12);
    push(&head,20);
    push(&head,10);
    head->next->next->next->next;
    floyd(head);
    return 0;
    
}
