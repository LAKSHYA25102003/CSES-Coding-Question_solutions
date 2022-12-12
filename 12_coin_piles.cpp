#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a;
        cin>>b;
        if((a+b)%3!=0)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        else
        {
            if(a==b)
            {
                cout<<"YES"<<"\n";
                continue;
            } 
            int maxi=max(a,b);
            int mini=min(a,b);
            if(2*mini<maxi)
            {
                cout<<"NO"<<"\n";
                continue;
            } 
            else
            {
                int tcr=maxi-mini;
                mini=mini-tcr;
                maxi=maxi-2*tcr;
                if(maxi==mini&&(maxi+mini)%3==0)
                {
                    cout<<"YES"<<"\n";
                }
                else
                {
                    cout<<"NO";
                }
            }
        }
    }
    return 0;
}