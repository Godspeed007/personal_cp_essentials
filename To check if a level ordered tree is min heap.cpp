/* Min Heap means every parent node's key should be less than it's child node's key.
   and Max Heap is vice-versa.
   Min Heap representation in terms of arrays:--
     parent node--- arr[(i-1)/2]
     left child node---arr[2*i+1)
     right child node---arr[2*i+2]
     */
#include<bits/stdc++.h>
using namespace std;
bool check(int level[],int n)
{
    for(int i=(n/2)-1;i>=0;i--)               //First non leaf node is at n/2-1 index
    {
        if(level[i]>level[2*i+1])             //checking if parent node value is higher than both the child nodes.
        return false;
        if(level[i]>level[2*i+2])
        return false;
    }
    return true;
}
int main()
{
    int level[]={10,17,13,15,16};
    int n=sizeof(level)/sizeof(level[0]);
    if(check(level,n))
    cout<<"True";
    else
    cout<<"False";
    return 0;
}
