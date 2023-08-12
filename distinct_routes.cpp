#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<bool> > visited;
ll n,m;
vector<vector<ll> > res;

bool solve(ll root,vector<vector<ll> > &adj,vector<ll> &curr)
{
    if(root==n) 
    {
        res.push_back(curr);
        return true;
    }
    for(auto x:adj[root])
    {
        if(visited[root][x]==false)
        {
            visited[root][x]=true;
            curr.push_back(x);
            bool tcr=solve(x,adj,curr);
            curr.pop_back();
            visited[root][x]=false;
        }
    }
    return false;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    
    cin>>n>>m;

    vector<vector<ll> > adj(n+1);
    for(ll i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }

    visited.resize(n+1,vector<bool> (n+1,false));
    vector<ll> curr;
    curr.push_back(1);
    solve(1,adj,curr);
    cout<<res.size()<<"\n";
    for(ll i=0;i<res.size();i++)
    {
        cout<<res[i].size()<<"\n";
        for(ll j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}