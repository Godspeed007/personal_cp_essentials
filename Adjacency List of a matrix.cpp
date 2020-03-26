/*An entry array[i] is used which represents list of vertices adjacent to ith vertex in the list.   
  We can also use weighted graph for adjacency list.
  Pros--Adding a vertex is easier.
        Saves o(V+E) space
        In worst case space consum. can be o(NV^2).
  Cons--finding whether there is an edge b/w two nodes is difficult.*/
#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printlist(vector<int>adj[],int NV) //NV is number of vertices.
{
    for(int v=0;v<NV;v++)
    {
        cout<<"adjacency list for "<<v<<"\n head";
        for(auto x:adj[v])
        cout<<"->"<<x;
        cout<<endl;
    }

}
int main()
{
    int NV=4;
    vector<int>adj[NV];
    addedge(adj,0,2);
    addedge(adj,2,3);
    addedge(adj,1,3);
    addedge(adj,3,0);
    printlist(adj,NV);
    return 0;
}
