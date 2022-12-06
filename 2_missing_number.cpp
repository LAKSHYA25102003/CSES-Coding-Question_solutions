#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<bool> table(n+1,false);
    for(int i=1;i<=n-1;i++)
    {
        int d;
        cin>>d;
        table[d]=true;
    }
    int res=0;
    for(int i=1;i<=n;i++)
    {
        if(table[i]==false)
        {
            res=i;
            break;
        }
    }
    cout<<res;
    return 0;
}