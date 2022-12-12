#include<bits/stdc++.h>
using namespace std;

long long mod=1e9+7;

long long util(long long n)
{
    if(n==1)
    {
        return 2;
    }
    long long res=(util(n/2))%mod;
    res=(res*res)%mod;
    if(n%2==1)
    {
        res=(res*2)%mod;
    }
    return res;
}

int main()
{
    long long n;
    cin>>n;
    cout<<util(n);
    return 0;
}