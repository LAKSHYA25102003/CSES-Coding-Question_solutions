#include<bits/stdc++.h>
using namespace std;

void tohCount(int a,int b,int c,int n,int &count)
{
    if(n==1)
    {
        count++;
        return ;
    }
    tohCount(a,c,b,n-1,count);
    count++;
    tohCount(b,a,c,n-1,count);
}

void toh(int a,int b,int c,int n)
{
    if(n==1)
    {
        cout<<a<<" "<<c<<"\n";
        return ;
    }
    toh(a,c,b,n-1);
    cout<<a<<" "<<c<<"\n";
    toh(b,a,c,n-1);
}

int main()
{
    int n;
    cin>>n;
    int count=0;
    tohCount(1,2,3,n,count);
    cout<<count<<"\n";
    toh(1,2,3,n);
    return 0;
}