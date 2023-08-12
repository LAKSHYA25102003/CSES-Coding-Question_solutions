#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m;
    cin>>n>>m;
    vector<vector<char> > grid(n,vector<char> (m));
    queue<pair<ll,ll> > q;
    ll pi,pj;
    map<pair<int,int> , pair<int,int> > mp;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]=='A')
            {
                grid[i][j]='#';
                q.push({i,j});
                mp[{i,j}]={-1,-1};
            }
            if(grid[i][j]=='B')
            {
                pi=i;
                pj=j;
            }
        }
        
    }

    ll d[5]={-1,0,1,0,-1};

    
    bool flag=false;
    
    while(!q.empty())
    {
        ll ci=q.front().first;
        ll cj=q.front().second;
        q.pop();
        if(ci==pi&&cj==pj)
        {
            flag=true;
            pi=ci;
            pj=cj;
            break;
        }
        for(ll i=0;i<4;i++)
        {
            ll ni=ci+d[i];
            ll nj=cj+d[i+1];
            if(ni>=0&&ni<n&&nj>=0&&nj<m&&grid[ni][nj]!='#')
            {
                grid[ni][nj]='#';
                mp[{ni,nj}]={ci,cj};
                q.push({ni,nj});
            }
        }
    }
    if(flag==false)
    {
        cout<<"NO"<<"\n";
        return 0;
    }

    cout<<"YES"<<"\n";

    ll len=0;
    string res="";
    while(mp[{pi,pj}].first!=-1)
    {
        len++;
        ll a,b;
        a=mp[{pi,pj}].first;
        b=mp[{pi,pj}].second;
        if(a==pi+1)
        {
            res+="U";
        }
        else if(a==pi-1)
        {
            res+="D";
        }
        else if(b==pj+1)
        {
            res+="L";
        }
        else
        {
            res+="R";
        }
        pi=a;
        pj=b;
    }

    reverse(res.begin(),res.end());
    cout<<len<<"\n";
    cout<<res<<"\n";

    return 0;
}