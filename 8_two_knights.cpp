#include<bits/stdc++.h>
using namespace std;




int main()
{
    long long n;
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        long long f=i*i*(i*i-1)/2;
        long long s=4*(i-1)*(i-2);
        long long res=f-s;
        cout<<res<<"\n";
    }
    return 0;
}