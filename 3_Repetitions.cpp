#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="";
    cin>>str;
    int n=str.size();
    int res=0;
    int count=1;
    for(int i=1;i<n;i++)
    {
        if(str[i]==str[i-1])
        {
            count++;
        }
        else
        {
            res=max(res,count);
            count=1;
        }
    }
    res=max(res,count);
    cout<<res;
    return 0;
}