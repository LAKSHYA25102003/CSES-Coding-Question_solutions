#include<bits/stdc++.h>
using namespace std;

void util(vector<long long> &apple,long long sum,long long &res,long long curr,int i)
{
    res=min(res,abs(sum-2*curr));
    for(int j=i;j<apple.size();j++)
    {
        if(j&&apple[j]==apple[j-1]&&j>i) continue;
        curr+=apple[j];
        util(apple,sum,res,curr,j+1);
        curr-=apple[j];
    }
}

int main()
{
    long long n;
    cin>>n;
    vector< long long > apple(abs(n));
    for(long long i=0;i<n;i++)
    {
        cin>>apple[i];
    }
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=apple[i];
    }
    long long res=INT_MAX;
    util(apple,sum,res,0,0);
    cout<<res;
    return 0;
}