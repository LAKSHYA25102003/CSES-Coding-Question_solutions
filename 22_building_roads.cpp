#include<bits/stdc++.h>
using namespace std;

void util(int root,vector<vector<int> > &adj,vector<bool> &visited)
{
    visited[root]=true;
    for(auto x:adj[root])
    {
        if(visited[x]==false)
        {
            util(x,adj,visited);
        }
    }
}

int main()
{
    int cities;
    int roads;
    cin>>cities;
    cin>>roads;
    vector<vector<int> > adj(cities+1);
    for(int i=0;i<roads;i++)
    {
        int u;
        int v;
        cin>>u;
        cin>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> visited(cities+1,false);
    int count=0;
    vector<int> res;
    for(int i=1;i<=cities;i++)
    {
        if(visited[i]==false)
        {
            res.push_back(i);
            count++;
            util(i,adj,visited);
        }
    }
    cout<<count-1<<"\n";
    for(int i=0;i<res.size()-1;i++)
    {
        cout<<res[i]<<" "<<res[i+1]<<"\n";
    }
    return 0;
}