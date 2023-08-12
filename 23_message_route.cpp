#include<bits/stdc++.h>
using namespace std;

int main()
{
    int comp;
    int connections;
    cin>>comp;
    cin>>connections;
    vector<vector<int> > adj(comp+1);
    for(int i=0;i<connections;i++)
    {
        int u;
        int v;
        cin>>u;
        cin>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> dist(comp+1,1e9);
    dist[1]=1;
    priority_queue<pair<int,vector<int> > ,vector<pair<int,vector<int> > >,greater<pair<int,vector<int> > > pq;
}