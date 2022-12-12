#include<bits/stdc++.h>
using namespace std;

int util(int n)
{
    int res=0;
    while(n>0)
    {
        res+=(n/5);
        n=n/5;
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    cout<<util(n);
    return 0;
}