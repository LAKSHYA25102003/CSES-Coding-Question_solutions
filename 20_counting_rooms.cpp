#include<bits/stdc++.h>
using namespace std;
# define vvc vector<vector<char> >

void util(vvc &map,int i,int j)
{
    int r=map.size();
    int c=map[0].size();
    if(i<0||i>=r||j<0||j>=c||map[i][j]=='#')
    {
        return ;
    }
    map[i][j]='#';
    util(map,i+1,j);
    util(map,i-1,j);
    util(map,i,j+1);
    util(map,i,j-1);
}

int main()
{
    int r;
    int c;
    cin>>r;
    cin>>c;
    vvc map(r,vector<char>(c));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>map[i][j];
        }
    }
    int res=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(map[i][j]=='.')
            {
                res++;
                util(map,i,j);
            }
        }
    }
    cout<<res;
    return 0;
}