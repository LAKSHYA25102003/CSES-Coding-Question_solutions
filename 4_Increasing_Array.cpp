#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> temp(n);
    for(int i=0;i<n;i++)
    {
        cin>>temp[i];
    }
    long long res=0;
    for(int i=1;i<n;i++)
    {
        if(temp[i]<temp[i-1])
        {
            res=res+temp[i-1]-temp[i];
            temp[i]=temp[i-1];
        }
    }
    cout<<res;
    return 0;
}