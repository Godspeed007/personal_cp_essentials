#include<bits/stdc++.h>
using namespace std;
int arr[50][50];
void matdisp(int v)
{
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void addedge(int u,int v){
    arr[u][v]=1;
    arr[v][u]=1;
}
int main()
{
    int v=5;
    addedge(1,4);
    addedge(2,3);
    addedge(3,0);
    addedge(3,1);
    addedge(1,2);
    addedge(4,3);
    matdisp(v);
    return 0;
}
