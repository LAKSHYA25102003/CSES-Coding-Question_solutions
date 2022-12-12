#include<bits/stdc++.h>
using namespace std;

void util(long long n,long long a)
{
    while(a!=0)
    {
        cout<<(a%2);
        a=a/2;
        n--;
    }
    while(n!=0)
    {
        cout<<0;
        n--;
    }
}

int main()
{
    long long n;
    cin>>n;
    for(long long i=0;i<(1<<n);i++)
    {
        long long a=(i^(i>>1));
        util(n,a);
        cout<<"\n";
    }
    return 0;
}