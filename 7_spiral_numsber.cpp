#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++)
    {
        long long r,c;
        cin>>r;
        cin>>c;
        if(r>c)
        {
            long long res=0;
            res=res+1+(r-1)*r;
            if(r%2==0)
            {
                res=res+(r-c);
            }
            else
            {
                res=res-(r-c);
            }
            cout<<res<<" ";
        }
        else if(c>r)
        {
            long long res=0;
            res=res+1+(c-1)*c;
            if(c%2==0)
            {
                res=res-(c-r);
            }
            else
            {
                res=res+(c-r);
            }
            cout<<res<<" ";
        }
        else
        {
            long long res=0;
            res+=1+r*(r-1);
            cout<<res<<" ";
        }
    }
    return 0;
}