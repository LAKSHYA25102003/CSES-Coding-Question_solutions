#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,m;

vector<vector<ll> > adj;




int main()
{
    bool flag=false;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    adj.resize(n+1);
    for(ll i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<ll> par(n+1,-1);
    vector<bool> visited(n+1,false);
    queue<ll> q;
    visited[1]=true;
    par[1]=-1;
    q.push(1);
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();
        if(curr==n)
        {
            flag=true;
            break;
        }
        for(auto x:adj[curr])
        {
            if(visited[x]==false)
            {
                visited[x]=true;
                par[x]=curr;
                q.push(x);
            }
        }
    }

    if(flag==false)
    {
        cout<<"IMPOSSIBLE\n";
        return 0;
    }

    ll len=0;
    vector<ll> res;
    ll tcr=n;
    while(par[tcr]!=-1)
    {
        res.push_back(tcr);
        tcr=par[tcr];
        len++;
    }
    res.push_back(1);
    cout<<len+1<<"\n";

    reverse(res.begin(),res.end());

    for(auto x:res)
    {
        cout<<x<<" ";
    }
    cout<<"\n";


    return 0;
}